// 函数: sub_4814c4
// 地址: 0x4814c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t nSavedDC_2
int32_t nSavedDC = nSavedDC_2
int32_t ebx
int32_t var_18 = ebx
void* eax_1 = *(arg2 + 8)
int32_t nSavedDC_1 = SaveDC(*(eax_1 + 0x18))
sub_42c308(arg1[0x94])
int32_t* var_1c_1 = &nSavedDC
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42c7c4(arg1[0x94], *(eax_1 + 0x18))
arg1[0x1a]
sub_42c630(arg1[0x94])
arg1[0x69]
sub_42c64c(arg1[0x94])
void* eax_15
eax_15.b = (*(eax_1 + 0x10) & 1) != 0
*(eax_1 + 8)
(*(*arg1 + 0xdc))(eax_15, ExceptionList, var_20, var_1c_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_4815a9
sub_42c7c4(arg1[0x94], 0)
sub_42c608(arg1[0x94])
nSavedDC = nSavedDC_1
return RestoreDC(*(eax_1 + 0x18), nSavedDC)
