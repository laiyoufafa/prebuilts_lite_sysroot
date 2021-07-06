/*
 * This header was generated from the Linux kernel headers by update_headers.py,
 * to provide necessary information from kernel to userspace, such as constants,
 * structures, and macros, and thus, contains no copyrightable information.
 */
#ifndef _UAPI_LINUX_SEG6_HMAC_H
#define _UAPI_LINUX_SEG6_HMAC_H
#include <linux/types.h>
#include <linux/seg6.h>
#define SEG6_HMAC_SECRET_LEN	64
#define SEG6_HMAC_FIELD_LEN	32
struct sr6_tlv_hmac {
	struct sr6_tlv tlvhdr;
	__u16 reserved;
	__be32 hmackeyid;
	__u8 hmac[SEG6_HMAC_FIELD_LEN];
};
enum {
	SEG6_HMAC_ALGO_SHA1 = 1,
	SEG6_HMAC_ALGO_SHA256 = 2,
};
#endif