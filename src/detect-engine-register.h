/* Copyright (C) 2007-2017 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Victor Julien <victor@inliniac.net>
 */

#ifndef __DETECT_ENGINE_REGISTER_H__
#define __DETECT_ENGINE_REGISTER_H__

enum {
    DETECT_SID,
    DETECT_PRIORITY,
    DETECT_REV,
    DETECT_CLASSTYPE,

    /* sorted by prefilter priority. Higher in this list means it will be
     * picked over ones lower in the list */
    DETECT_AL_APP_LAYER_PROTOCOL,
    DETECT_ACK,
    DETECT_SEQ,
    DETECT_WINDOW,
    DETECT_IPOPTS,
    DETECT_FLAGS,
    DETECT_FRAGBITS,
    DETECT_FRAGOFFSET,
    DETECT_TTL,
    DETECT_TOS,
    DETECT_ITYPE,
    DETECT_ICODE,
    DETECT_ICMP_ID,
    DETECT_ICMP_SEQ,
    DETECT_DSIZE,

    DETECT_FLOW,
    /* end prefilter sort */

    DETECT_THRESHOLD,
    DETECT_METADATA,
    DETECT_REFERENCE,
    DETECT_TAG,
    DETECT_MSG,
    DETECT_CONTENT,
    DETECT_URICONTENT,
    DETECT_PCRE,
    DETECT_DEPTH,
    DETECT_DISTANCE,
    DETECT_WITHIN,
    DETECT_OFFSET,
    DETECT_REPLACE,
    DETECT_NOCASE,
    DETECT_FAST_PATTERN,
    DETECT_RAWBYTES,
    DETECT_BYTETEST,
    DETECT_BYTEJUMP,
    DETECT_SAMEIP,
    DETECT_GEOIP,
    DETECT_IPPROTO,
    DETECT_FTPBOUNCE,
    DETECT_ISDATAAT,
    DETECT_ID,
    DETECT_RPC,
    DETECT_FLOWVAR,
    DETECT_FLOWVAR_POSTMATCH,
    DETECT_FLOWINT,
    DETECT_PKTVAR,
    DETECT_NOALERT,
    DETECT_FLOWBITS,
    DETECT_HOSTBITS,
    DETECT_IPV4_CSUM,
    DETECT_TCPV4_CSUM,
    DETECT_TCPV6_CSUM,
    DETECT_UDPV4_CSUM,
    DETECT_UDPV6_CSUM,
    DETECT_ICMPV4_CSUM,
    DETECT_ICMPV6_CSUM,
    DETECT_STREAM_SIZE,
    DETECT_DETECTION_FILTER,

    DETECT_DECODE_EVENT,
    DETECT_GID,
    DETECT_MARK,

    DETECT_AL_TLS_VERSION,
    DETECT_AL_TLS_SUBJECT,
    DETECT_AL_TLS_ISSUERDN,
    DETECT_AL_TLS_NOTBEFORE,
    DETECT_AL_TLS_NOTAFTER,
    DETECT_AL_TLS_EXPIRED,
    DETECT_AL_TLS_VALID,
    DETECT_AL_TLS_FINGERPRINT,
    DETECT_AL_TLS_STORE,

    DETECT_AL_HTTP_COOKIE,
    DETECT_AL_HTTP_METHOD,
    DETECT_AL_HTTP_PROTOCOL,
    DETECT_AL_HTTP_START,
    DETECT_AL_URILEN,
    DETECT_AL_HTTP_CLIENT_BODY,
    DETECT_AL_HTTP_SERVER_BODY,
    DETECT_AL_HTTP_HEADER,
    DETECT_AL_HTTP_HEADER_NAMES,
    DETECT_AL_HTTP_HEADER_ACCEPT,
    DETECT_AL_HTTP_HEADER_ACCEPT_LANG,
    DETECT_AL_HTTP_HEADER_ACCEPT_ENC,
    DETECT_AL_HTTP_HEADER_CONNECTION,
    DETECT_AL_HTTP_HEADER_CONTENT_LEN,
    DETECT_AL_HTTP_HEADER_CONTENT_TYPE,
    DETECT_AL_HTTP_HEADER_REFERER,
    DETECT_AL_HTTP_RAW_HEADER,
    DETECT_AL_HTTP_URI,
    DETECT_AL_HTTP_RAW_URI,
    DETECT_AL_HTTP_STAT_MSG,
    DETECT_AL_HTTP_STAT_CODE,
    DETECT_AL_HTTP_USER_AGENT,
    DETECT_AL_HTTP_HOST,
    DETECT_AL_HTTP_RAW_HOST,
    DETECT_AL_HTTP_REQUEST_LINE,
    DETECT_AL_HTTP_RESPONSE_LINE,
    DETECT_AL_NFS_PROCEDURE,
    DETECT_AL_NFS_VERSION,
    DETECT_AL_SSH_PROTOCOL,
    DETECT_AL_SSH_PROTOVERSION,
    DETECT_AL_SSH_SOFTWARE,
    DETECT_AL_SSH_SOFTWAREVERSION,
    DETECT_AL_SSL_VERSION,
    DETECT_AL_SSL_STATE,
    DETECT_BYTE_EXTRACT,
    DETECT_FILE_DATA,
    DETECT_PKT_DATA,
    DETECT_AL_APP_LAYER_EVENT,

    DETECT_DCE_IFACE,
    DETECT_DCE_OPNUM,
    DETECT_DCE_STUB_DATA,

    DETECT_ASN1,

    DETECT_ENGINE_EVENT,
    DETECT_STREAM_EVENT,

    DETECT_FILENAME,
    DETECT_FILEEXT,
    DETECT_FILESTORE,
    DETECT_FILEMAGIC,
    DETECT_FILEMD5,
    DETECT_FILESHA1,
    DETECT_FILESHA256,
    DETECT_FILESIZE,

    DETECT_L3PROTO,
    DETECT_LUA,
    DETECT_IPREP,

    DETECT_AL_DNS_QUERY,
    DETECT_AL_TLS_SNI,
    DETECT_AL_TLS_CERT_ISSUER,
    DETECT_AL_TLS_CERT_SUBJECT,
    DETECT_AL_TLS_CERT_SERIAL,
    DETECT_AL_TLS_CERT_FINGERPRINT,

    DETECT_AL_MODBUS,
    DETECT_CIPSERVICE,
    DETECT_ENIPCOMMAND,

    DETECT_AL_DNP3DATA,
    DETECT_AL_DNP3FUNC,
    DETECT_AL_DNP3IND,
    DETECT_AL_DNP3OBJ,

    DETECT_XBITS,
    DETECT_BASE64_DECODE,
    DETECT_BASE64_DATA,

    DETECT_TEMPLATE,
    DETECT_FTPDATA,
    DETECT_TARGET,
    DETECT_AL_TEMPLATE_BUFFER,

    DETECT_BYPASS,

    DETECT_PREFILTER,

    /* make sure this stays last */
    DETECT_TBLSIZE,
};

/* Table with all SigMatch registrations */
SigTableElmt sigmatch_table[DETECT_TBLSIZE];

void SigTableList(const char *keyword);
void SigTableSetup(void);
void SigTableRegisterTests(void);

#endif /* __DETECT_ENGINE_REGISTER_H__ */
