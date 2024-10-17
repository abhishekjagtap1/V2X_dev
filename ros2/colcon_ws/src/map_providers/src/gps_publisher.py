
# import rclpy
# from rclpy.node import Node
# import requests
# from std_msgs.msg import Float64MultiArray

# class GPSPublisher(Node):
#     def __init__(self):
#         super().__init__('gps_publisher')
#         self.publisher_ = self.create_publisher(Float64MultiArray, 'gps_data', 10)
#         self.timer = self.create_timer(5.0, self.get_lat_lon)  # publish every 5 seconds

#     def get_lat_lon(self):
#         # URL for the Nominatim API to reverse geocode an address or get location based on IP
#         url = 'https://nominatim.openstreetmap.org/search'
#         params = {
#             'q': 'Ingolstadt',  # Change this to dynamic location data, e.g., current city
#             'format': 'json'
#         }

#         # Make the request to the Nominatim API
#         response = requests.get(url, params=params)
#         result = response.json()

#         if response.status_code == 200 and len(result) > 0:
#             lat = float(result[0]['lat'])
#             lon = float(result[0]['lon'])

#             # Publish latitude and longitude to ROS 2 topic
#             gps_data = Float64MultiArray()
#             gps_data.data = [lat, lon]
#             self.publisher_.publish(gps_data)

#             self.get_logger().info(f'Published: Latitude: {lat}, Longitude: {lon}')
#         else:
#             self.get_logger().error(f'Failed to get location: {response.status_code}, {result}')

# def main(args=None):
#     rclpy.init(args=args)
#     gps_publisher = GPSPublisher()
#     rclpy.spin(gps_publisher)

#     gps_publisher.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
import rclpy
from rclpy.node import Node
import requests
from std_msgs.msg import Float64MultiArray

class MobileLocationPublisher(Node):
    def __init__(self):
        super().__init__('mobile_location_publisher')
        self.publisher_ = self.create_publisher(Float64MultiArray, 'mobile_gps_data', 10)
        self.timer = self.create_timer(5.0, self.get_lat_lon)  # publish every 5 seconds

    def get_lat_lon(self):
        # URL for the IP-API to get location data based on IP
        url = 'http://ip-api.com/json/'

        # Make the request to the IP-API
        response = requests.get(url)
        result = response.json()

        if response.status_code == 200 and result['status'] == 'success':
            lat = float(result['lat'])
            lon = float(result['lon'])

            # Publish latitude and longitude to ROS 2 topic
            gps_data = Float64MultiArray()
            gps_data.data = [lat, lon]
            self.publisher_.publish(gps_data)

            self.get_logger().info(f'Published: Latitude: {lat}, Longitude: {lon}')
        else:
            self.get_logger().error(f'Failed to get location: {response.status_code}, {result}')

def main(args=None):
    rclpy.init(args=args)
    mobile_location_publisher = MobileLocationPublisher()
    rclpy.spin(mobile_location_publisher)

    mobile_location_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
