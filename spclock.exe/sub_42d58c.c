// 函数: sub_42d58c
// 地址: 0x42d58c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* hDC_1)(void* arg1, void* arg2)
int32_t (* hDC)(void* arg1, void* arg2) = hDC_1
int32_t* __return_addr_1 = &hDC
int32_t ebx
int32_t var_78 = ebx
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi
int32_t var_c = arg2
int32_t* ExceptionList_1 = arg1
int32_t var_14 = sub_402e90(arg3 << 4)
int32_t* var_84 = &hDC
int32_t (* var_88)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*ExceptionList_1 + 0xc))(ExceptionList, var_88, var_84)

if ((*arg5 | arg5[1]) != 0)
    *arg4 = *arg5
    arg4[1] = arg5[1]
else
    *arg4 = GetSystemMetrics(SM_CXICON)
    arg4[1] = GetSystemMetrics(SM_CYICON)

if (GetDC(nullptr) == 0)
    __return_addr_1 = sub_42ca44()

__return_addr = __return_addr_1
hDC = j_sub_40443c
ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int16_t ebx_2 =
    GetDeviceCaps(__return_addr_1[-0xa], 0xe) * GetDeviceCaps(__return_addr_1[-0xa], 0xc)

if (ebx_2 u<= 8)
    __return_addr_1[-7] = 1 << ebx_2.b
else
    __return_addr_1[-7] = 0x7fffffff

fsbase->NtTib.ExceptionList = ExceptionList_1
hDC = __return_addr_1[-0xa]
ExceptionList_1 = nullptr
return ReleaseDC(ExceptionList_1, hDC)
