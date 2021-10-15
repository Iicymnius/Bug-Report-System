//find;

public:
	void SetOffLinePhase();

//add above;

#ifdef ENABLE_BUG_REPORT_SYSTEM
public:
	bool SendBugReportPacket(const char* c_szText);
#endif