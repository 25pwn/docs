CONTAINER_NAME="f36-1"
CONTAINER_IMAGE="images:fedora/36/cloud"
sudo lxc delete "${CONTAINER_NAME}" -f
sudo lxc launch ${CONTAINER_IMAGE} "${CONTAINER_NAME}"
sudo lxc exec "${CONTAINER_NAME}" -- bash