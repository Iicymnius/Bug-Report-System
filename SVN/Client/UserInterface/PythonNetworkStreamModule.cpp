//find;

void initnet()

//add above;

#ifdef ENABLE_BUG_REPORT_SYSTEM
PyObject* netSendBugReportPacket(PyObject* poSelf, PyObject* poArgs)
{
	char* szText;
	if (!PyTuple_GetString(poArgs, 0, &szText))
		return Py_BuildException();

	CPythonNetworkStream& rkNetStream = CPythonNetworkStream::Instance();
	rkNetStream.SendBugReportPacket(szText);

	return Py_BuildNone();
}
#endif

//find again;

		{ "RegisterErrorLog",						netRegisterErrorLog,						METH_VARARGS },

//add below;

#ifdef ENABLE_BUG_REPORT_SYSTEM
		{ "SendBugReportPacket",					netSendBugReportPacket,						METH_VARARGS },
#endif