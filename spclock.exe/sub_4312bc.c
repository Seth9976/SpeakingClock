// 函数: sub_4312bc
// 地址: 0x4312bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* lpCriticalSection_1)()
int32_t (* lpCriticalSection)() = lpCriticalSection_1
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t ebx_1 = arg2
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
arg2.b = 1
void* eax_1 = sub_403c38(arg3, arg2)
__return_addr = &lpCriticalSection
lpCriticalSection = j_sub_404188
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(eax_1 + 8) = ebx_1
*(eax_1 + 0x10) = arg3
__builtin_memcpy(eax_1 + 0x18, arg6, 0x54)
*(eax_1 + 0x70) = arg5

if (*(eax_1 + 0x2c) != 0)
    *(eax_1 + 0x14) = *(eax_1 + 8)

sub_403e18(arg4, &data_41806c)
*(eax_1 + 0x6c) = arg4
fsbase->NtTib.ExceptionList = ExceptionList
EnterCriticalSection(&data_4b1a64)
__return_addr = &lpCriticalSection
lpCriticalSection = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42fb74(ExceptionList->__offset(0x28).d)
ExceptionList->__offset(0x28).d = eax_1
sub_42fb70(eax_1)
fsbase->NtTib.ExceptionList = ExceptionList
lpCriticalSection = &data_4b1a64
return LeaveCriticalSection(lpCriticalSection)
