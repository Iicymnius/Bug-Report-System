//find;

	HEADER_CG_SCRIPT_SELECT_ITEM = 114,

//add below;

#ifdef ENABLE_BUG_REPORT_SYSTEM
	HEADER_CG_BUG_REPORT = 123,//You may need to change the number 123 here.
#endif

//find again;

#pragma pack(pop)

//add above;

#ifdef ENABLE_BUG_REPORT_SYSTEM
typedef struct packet_bug_report
{
	BYTE	header;
	char	szText[512 + 1];
} TPacketCGBugReport;
#endif