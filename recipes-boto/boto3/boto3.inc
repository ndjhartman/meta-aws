SUMMARY = "Boto 3 - The AWS SDK for Python"
DESCRIPTION =  "Boto3 is the Amazon Web Services (AWS) \
                Software Development Kit (SDK) for Python, \
                which allows Python developers to write software \
                that makes use of services like Amazon S3 and Amazon EC2."

HOMEPAGE = "https://github.com/boto/boto3"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=2ee41112a44fe7014dce33e26468ba93"


SRC_URI = "git://github.com/boto/boto3.git;protocol=https;tag=${PV}"

S = "${WORKDIR}/git"

RDEPENDS_${PN} = "python3"

# Copy examples into rootfs
do_install_append() {
    install -d ${D}${datadir}/${BPN}/
    install -d ${D}/root/.aws
    cp --preserve=mode,timestamps -r ${S}/boto3/examples/ ${D}${datadir}/${BPN}
}

# Associate generated files with package
FILES_${PN} += "${datadir}/${BPN}/*"
FILES_${PN} += "/root/.aws/*"
