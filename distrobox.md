# usage
```
image="fedora:37"
container_name="fedora.test1.0"

mkdir -p "${HOME}/distrobox/${container_name}"

distrobox create \
--name "${container_name}" \
--image "${image}" \
--home "${HOME}/distrobox/${container_name}" \
--init-hooks 'umount /var/lib/flatpak' \
--init

distrobox create 
```