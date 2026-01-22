// 函数: sub_448121
// 地址: 0x448121
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*(arg3 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
*(arg3 - 4) = arg2
sub_405008(*(arg3 - 4))
void* var_18 = arg3
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_3
BOOL eax_1
int32_t edx
eax_1, edx = OpenClipboard(nullptr)

if (eax_1 == 0)
    edx.b = 1
    sub_40451c(sub_40cf6c(sub_407f68+0x68, edx, data_4ac014))
    int32_t var_8
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = &data_448260
    sub_404b88(arg3 - 4)
    return arg3 - 4

void* var_24_1 = arg3
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
void* ebx_1 = *(arg3 - 4)
void* eax_2 = ebx_1

if (eax_2 != 0)
    eax_2 = *(eax_2 - 4)

*(arg3 - 8) = GlobalAlloc(0x2002, eax_2 + 1)
void* var_30_1 = arg3
int32_t (* var_34_1)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int64_t* eax_7 = GlobalLock(*(arg3 - 8))
void* var_3c_1 = arg3
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (ebx_1 != 0)
    ebx_1 = *(ebx_1 - 4)

sub_4030d0(sub_405018(*(arg3 - 4)), eax_7, ebx_1 + 1)
EmptyClipboard()
SetClipboardData(1, *(arg3 - 8))
fsbase->NtTib.ExceptionList = ExceptionList
int32_t* (__stdcall* var_3c_2)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5, void* const arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, 
    int32_t arg11) = sub_4481f0
return GlobalUnlock(*(arg3 - 8))
