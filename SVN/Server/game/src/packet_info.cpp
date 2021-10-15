//find;

	Set(HEADER_CG_STATE_CHECKER, sizeof(BYTE), "ServerStateCheck", false);

//add below;

#ifdef ENABLE_BUG_REPORT_SYSTEM
	Set(HEADER_CG_BUG_REPORT, sizeof(TPacketCGBugReport), "BugReport", false);
#endif