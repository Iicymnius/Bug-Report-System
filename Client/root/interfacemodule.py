#find;

		self.wndGuild = None

#add below;

		if app.ENABLE_BUG_REPORT_SYSTEM:
			self.Probdlg = None

#add to bottom;

	if app.ENABLE_BUG_REPORT_SYSTEM:
		def OnClickBugReport(self):
			self.Probdlg = uiCommon.InputDialog()
			self.Probdlg.SetTitle('Sorun Bildir - Maks. 100 Karakter -- (Yaln\xfdzca tespit etti\xf0iniz oyun sorunlar\xfdn\xfd g\xf6nderin)')
			self.Probdlg.SetMaxLength(100)
			self.Probdlg.SetAcceptEvent(ui.__mem_func__(self.OnSendReport))
			self.Probdlg.SetCancelEvent(ui.__mem_func__(self.OnCancelReport))
			self.Probdlg.Open()

		def OnSendReport(self):
			text = self.Probdlg.GetText()
			net.SendBugReportPacket(text)
			self.Probdlg.Close()
			self.Probdlg = None

		def OnCancelReport(self):
			self.Probdlg.Close()
			self.Probdlg = None
			return True