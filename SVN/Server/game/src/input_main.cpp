//find;

int CInputMain::Analyze(LPDESC d, BYTE bHeader, const char* c_pData)

//add above;

#ifdef ENABLE_BUG_REPORT_SYSTEM
void CInputMain::BugReport(LPCHARACTER ch, const char* c_pData)
{
	TPacketCGBugReport* p = (TPacketCGBugReport*)c_pData;
	
	if (get_global_time() < ch->GetQuestFlag("report_time.system"))
	{
		ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("1 dakika gecemeden tekrar sorun bildiremezsin."));
		return;
	}

	ch->ChatPacket(CHAT_TYPE_INFO, LC_TEXT("Sorun basarili sekilde bildirildi."));
	ch->SetQuestFlag("report_time.system", get_global_time() + 1*60);
	DBManager::instance().DirectQuery("INSERT INTO player.bug_report_list (time, name, report_text) VALUES(NOW(), '%s', '%s')", ch->GetName(), p->szText);
}
#endif

//find again;

	case HEADER_CG_CLIENT_VERSION:
		Version(ch, c_pData);
		break;

//add below;

#ifdef ENABLE_BUG_REPORT_SYSTEM
	case HEADER_CG_BUG_REPORT:
		BugReport(ch, c_pData);
		break;
#endif