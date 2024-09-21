#!/bin/bash
source name.sh

echo "You are here, image name is ${IIMAGE}"

docker run --rm ${IMAGE}

