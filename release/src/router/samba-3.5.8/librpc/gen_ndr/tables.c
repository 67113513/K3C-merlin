
/* Automatically generated by tables.pl. DO NOT EDIT */

#include "includes.h"
#include "librpc/ndr/libndr.h"
#include "librpc/ndr/ndr_table.h"
#include "librpc/gen_ndr/ndr_dfs.h"
#include "librpc/gen_ndr/ndr_drsblobs.h"
#include "librpc/gen_ndr/ndr_drsuapi.h"
#include "librpc/gen_ndr/ndr_dssetup.h"
#include "librpc/gen_ndr/ndr_echo.h"
#include "librpc/gen_ndr/ndr_epmapper.h"
#include "librpc/gen_ndr/ndr_eventlog.h"
#include "librpc/gen_ndr/ndr_initshutdown.h"
#include "librpc/gen_ndr/ndr_krb5pac.h"
#include "librpc/gen_ndr/ndr_lsa.h"
#include "librpc/gen_ndr/ndr_netlogon.h"
#include "librpc/gen_ndr/ndr_ntsvcs.h"
#include "librpc/gen_ndr/ndr_samr.h"
#include "librpc/gen_ndr/ndr_srvsvc.h"
#include "librpc/gen_ndr/ndr_svcctl.h"
#include "librpc/gen_ndr/ndr_winreg.h"
#include "librpc/gen_ndr/ndr_wkssvc.h"

NTSTATUS ndr_table_register_builtin_tables(void)
{
	NTSTATUS status;

	status = ndr_table_register(&ndr_table_netdfs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_drsblobs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_drsuapi);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_dssetup);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_rpcecho);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_epmapper);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_eventlog);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_initshutdown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_krb5pac);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_lsarpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_netlogon);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_ntsvcs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_samr);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_srvsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_svcctl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_winreg);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = ndr_table_register(&ndr_table_wkssvc);
	if (NT_STATUS_IS_ERR(status)) return status;


	
	return NT_STATUS_OK;
}
