//add to bottom;

#ifdef ENABLE_BUG_REPORT_SYSTEM
bool CPythonNetworkStream::SendBugReportPacket(const char* c_szText)
{
	if (strlen(c_szText) == 0)
		return true;

	if (strlen(c_szText) >= 512)
		return true;

	int iTextLen = strlen(c_szText) + 1;
	TPacketCGBugReport ReportPacket;
	ReportPacket.header = HEADER_CG_BUG_REPORT;
	strncpy(ReportPacket.szText, c_szText, sizeof(ReportPacket.szText) - 1);

	if (!Send(sizeof(ReportPacket), &ReportPacket))
		return false;

	return true;
}
#endif