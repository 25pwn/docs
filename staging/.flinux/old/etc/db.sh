fedora="registry.fedoraproject.org/fedora:37"
arch="docker.io/library/archlinux:latest"

container_name="f37"
image="${fedora}"

mkdir -p "${HOME}/distrobox/${container_name}"
distrobox create --name "${container_name}" --image "${image}" --home "${HOME}/distrobox/${container_name}" --init