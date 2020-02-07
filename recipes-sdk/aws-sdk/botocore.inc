SUMMARY = "A low-level interface to a growing number of Amazon Web Services"
HOMEPAGE = "https://github.com/boto/botocore"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"

SRC_URI = "git://github.com/boto/botocore.git;protocol=https;tag=${PV}"

S = "${WORKDIR}/git"

RDEPENDS_${PN} = "${PYTHON_PN}-tox \
                  ${PYTHON_PN}-nose \
                  ${PYTHON_PN}-mock \
                  ${PYTHON_PN}-wheel \
                  ${PYTHON_PN}-docutils \
                  ${PYTHON_PN}-behave \
                  ${PYTHON_PN}-jsonschema \
                 "