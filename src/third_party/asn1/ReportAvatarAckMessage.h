/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ReportAvatarAckMessage_H_
#define	_ReportAvatarAckMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NonZeroId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum reportResult {
	reportResult_avatarReportAccepted	= 0,
	reportResult_avatarReportDuplicate	= 1,
	reportResult_avatarReportInvalid	= 2
} e_reportResult;

/* ReportAvatarAckMessage */
typedef struct ReportAvatarAckMessage {
	NonZeroId_t	 reportedPlayerId;
	long	 reportResult;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportAvatarAckMessage_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reportResult_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReportAvatarAckMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportAvatarAckMessage_H_ */
#include <asn_internal.h>
