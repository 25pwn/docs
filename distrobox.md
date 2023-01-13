# usage
image="archlinux:latest"
container_name="arch.test.noinit"

mkdir -p "${HOME}/distrobox/${container_name}"

distrobox create \
--name "${container_name}" \
--image "${image}" \
--home "${HOME}/distrobox/${container_name}" \
--init-hooks 'umount /var/lib/flatpak' \
--init


distrobox create 