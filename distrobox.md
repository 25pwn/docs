# usage
```
image="fedora:latest"
container_name="fedora.test0.0"

mkdir -p "${HOME}/distrobox/${container_name}"

distrobox create \
--name "${container_name}" \
--image "${image}" \
--home "${HOME}/distrobox/${container_name}" \
--init-hooks 'umount /var/lib/flatpak' \
--init

distrobox create 
```