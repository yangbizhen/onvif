/* soapwsddService.cpp
   Generated by gSOAP 2.8.17r from onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapwsddService.h"

wsddService::wsddService()
{	wsddService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

wsddService::wsddService(const struct soap &_soap) : soap(_soap)
{ }

wsddService::wsddService(soap_mode iomode)
{	wsddService_init(iomode, iomode);
}

wsddService::wsddService(soap_mode imode, soap_mode omode)
{	wsddService_init(imode, omode);
}

wsddService::~wsddService()
{ }

void wsddService::wsddService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
	{"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
	{"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
	{"wsc", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL, NULL},
	{"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
	{"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
	{"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void wsddService::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void wsddService::reset()
{	destroy();
	soap_done(this);
	soap_initialize(this);
	wsddService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
wsddService *wsddService::copy()
{	wsddService *dup = SOAP_NEW_COPY(wsddService(*(struct soap*)this));
	return dup;
}
#endif

int wsddService::soap_close_socket()
{	return soap_closesock(this);
}

int wsddService::soap_force_close_socket()
{	return soap_force_closesock(this);
}

int wsddService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this, string, detailXML);
}

int wsddService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int wsddService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this, string, detailXML);
}

int wsddService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void wsddService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void wsddService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *wsddService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

void wsddService::soap_noheader()
{	this->header = NULL;
}

void wsddService::soap_header(struct _wsse__Security *wsse__Security, char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this);
	this->header->wsse__Security = wsse__Security;
	this->header->wsa__MessageID = wsa__MessageID;
	this->header->wsa__RelatesTo = wsa__RelatesTo;
	this->header->wsa__From = wsa__From;
	this->header->wsa__ReplyTo = wsa__ReplyTo;
	this->header->wsa__FaultTo = wsa__FaultTo;
	this->header->wsa__To = wsa__To;
	this->header->wsa__Action = wsa__Action;
	this->header->wsdd__AppSequence = wsdd__AppSequence;
	this->header->wsa5__MessageID = wsa5__MessageID;
	this->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->header->wsa5__From = wsa5__From;
	this->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->header->wsa5__FaultTo = wsa5__FaultTo;
	this->header->wsa5__To = wsa5__To;
	this->header->wsa5__Action = wsa5__Action;
	this->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *wsddService::soap_header()
{	return this->header;
}

int wsddService::run(int port)
{	if (soap_valid_socket(this->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->error;
			soap_destroy(this);
			soap_end(this);
		}
	}
	else
		return this->error;
	return SOAP_OK;
}

SOAP_SOCKET wsddService::bind(const char *host, int port, int backlog)
{	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET wsddService::accept()
{	return soap_accept(this);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int wsddService::ssl_accept()
{	return soap_ssl_accept(this);
}
#endif

int wsddService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->max_keep_alive > 0 && !--k)
			this->keep_alive = 0;
#endif

		if (soap_begin_serve(this))
		{	if (this->error >= SOAP_STOP)
				continue;
			return this->error;
		}
		if (dispatch() || (this->fserveloop && this->fserveloop(this)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___wsdd__Hello(wsddService*);
static int serve___wsdd__Bye(wsddService*);
static int serve___wsdd__Probe(wsddService*);
static int serve___wsdd__ProbeMatches(wsddService*);
static int serve___wsdd__Resolve(wsddService*);
static int serve___wsdd__ResolveMatches(wsddService*);

int wsddService::dispatch()
{	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "wsdd:Hello"))
		return serve___wsdd__Hello(this);
	if (!soap_match_tag(this, this->tag, "wsdd:Bye"))
		return serve___wsdd__Bye(this);
	if (!soap_match_tag(this, this->tag, "wsdd:Probe"))
		return serve___wsdd__Probe(this);
	if (!soap_match_tag(this, this->tag, "wsdd:ProbeMatches"))
		return serve___wsdd__ProbeMatches(this);
	if (!soap_match_tag(this, this->tag, "wsdd:Resolve"))
		return serve___wsdd__Resolve(this);
	if (!soap_match_tag(this, this->tag, "wsdd:ResolveMatches"))
		return serve___wsdd__ResolveMatches(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___wsdd__Hello(wsddService *soap)
{	struct __wsdd__Hello soap_tmp___wsdd__Hello;
	soap_default___wsdd__Hello(soap, &soap_tmp___wsdd__Hello);
	if (!soap_get___wsdd__Hello(soap, &soap_tmp___wsdd__Hello, "-wsdd:Hello", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Hello(soap_tmp___wsdd__Hello.wsdd__Hello);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__Bye(wsddService *soap)
{	struct __wsdd__Bye soap_tmp___wsdd__Bye;
	soap_default___wsdd__Bye(soap, &soap_tmp___wsdd__Bye);
	if (!soap_get___wsdd__Bye(soap, &soap_tmp___wsdd__Bye, "-wsdd:Bye", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Bye(soap_tmp___wsdd__Bye.wsdd__Bye);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__Probe(wsddService *soap)
{	struct __wsdd__Probe soap_tmp___wsdd__Probe;
	soap_default___wsdd__Probe(soap, &soap_tmp___wsdd__Probe);
	if (!soap_get___wsdd__Probe(soap, &soap_tmp___wsdd__Probe, "-wsdd:Probe", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Probe(soap_tmp___wsdd__Probe.wsdd__Probe);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__ProbeMatches(wsddService *soap)
{	struct __wsdd__ProbeMatches soap_tmp___wsdd__ProbeMatches;
	soap_default___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches);
	if (!soap_get___wsdd__ProbeMatches(soap, &soap_tmp___wsdd__ProbeMatches, "-wsdd:ProbeMatches", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->ProbeMatches(soap_tmp___wsdd__ProbeMatches.wsdd__ProbeMatches);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__Resolve(wsddService *soap)
{	struct __wsdd__Resolve soap_tmp___wsdd__Resolve;
	soap_default___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve);
	if (!soap_get___wsdd__Resolve(soap, &soap_tmp___wsdd__Resolve, "-wsdd:Resolve", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Resolve(soap_tmp___wsdd__Resolve.wsdd__Resolve);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}

static int serve___wsdd__ResolveMatches(wsddService *soap)
{	struct __wsdd__ResolveMatches soap_tmp___wsdd__ResolveMatches;
	soap_default___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches);
	if (!soap_get___wsdd__ResolveMatches(soap, &soap_tmp___wsdd__ResolveMatches, "-wsdd:ResolveMatches", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->ResolveMatches(soap_tmp___wsdd__ResolveMatches.wsdd__ResolveMatches);
	if (soap->error)
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
