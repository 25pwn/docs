# Distrobox
---
tags: linux-platform containers
---
```
image="archlinux:latest"
container_name="a0"

image="fedora:37"
container_name="f0"

mkdir -p "${HOME}/distrobox/${container_name}"

distrobox create \
--name "${container_name}" \
--image "${image}" \
--home "${HOME}/distrobox/${container_name}" \
--pre-init-hooks 'dnf install -y systemd' \
--init-hooks 'umount /var/lib/flatpak' \
--init

distrobox create 
```