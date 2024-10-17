# -*- mode: ruby -*-
# vi: set ft=ruby :

# Vagrantfile API/syntax version. Don't touch unless you know what you're doing!
VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
  config.vm.box = "generic/ubuntu2004"
  config.vm.network :forwarded_port, guest: 8080, host: 8083
  config.vm.network :forwarded_port, guest: 80, host: 8084
  config.vm.provision "ansible" do |ansible|
    ansible.compatibility_mode = '2.0'
    ansible.playbook = "ansible/vagrant.yml"
    ansible.extra_vars = { ansible_python_interpreter:"/usr/bin/python3" }
  end

  config.vm.synced_folder "./html/", "/vagrant_www/"
  #config.vm.synced_folder "./vagrant-provision/", "/etc/nginx/html/"

  config.vm.provider :virtualbox do |vb|
      # distinguish VMs by a location-dependent suffix
      name_suffix = Digest::SHA1.hexdigest(Dir.pwd)[0..6]

      vb.gui = false
      vb.memory = 2048
      vb.name = "Demonstration_5going Server " + name_suffix
      vb.customize ["modifyvm", :id, "--vram", "32"]
  end
end
