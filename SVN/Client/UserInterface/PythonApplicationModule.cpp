//find;

#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM", 0);
#endif

//add below;

#ifdef ENABLE_BUG_REPORT_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_BUG_REPORT_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_BUG_REPORT_SYSTEM", 0);
#endif