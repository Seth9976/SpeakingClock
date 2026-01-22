// 函数: sub_42dadc
// 地址: 0x42dadc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_5c = ebx
int32_t esi
int32_t var_60 = esi
int32_t edi
int32_t var_64 = edi
char var_5 = arg1
void var_2e
sub_403578(&var_2e, 6, 0)
void var_58
sub_403578(&var_58, 0x10, 0)
ICONINFO piconinfo
sub_42dad0(GetIconInfo(arg2, &piconinfo))
int32_t* var_68_1 = &var_4
int32_t (* var_6c_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t var_14
int32_t var_c
sub_42d994(&var_14, &var_c, 2)
int32_t var_18
int32_t var_10
sub_42d994(&var_18, &var_10, 0xffffffff)
int32_t var_1c = 0
int32_t var_20 = 0
int32_t var_24 = 0
int32_t var_28 = 0
int32_t* var_74_2 = &var_4
int32_t (* var_78)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_7 = sub_402e90(var_c)
int32_t eax_9 = sub_402e90(var_14)
int32_t var_24_1 = sub_402e90(var_10)
int32_t var_28_1 = sub_402e90(var_18)
void* ebp_1 = sub_42da04(piconinfo.hbmMask, nullptr, eax_7, 2, eax_9)
int32_t* ebx_2
void* ebp_2
ebx_2, ebp_2 = sub_42da04(*(ebp_1 - 0x34), nullptr, *(ebp_1 - 0x20), 0xffffffff, *(ebp_1 - 0x24))

if (*(ebp_2 - 1) != 0)
    *(ebp_2 - 0x30) = *(ebp_2 - 0xc) + 0x16 + *(ebp_2 - 0x14) + *(ebp_2 - 0x10)
    (*(*ebx_2 + 0x10))()

*(ebp_2 - 0x28) = 1
*(ebp_2 - 0x26) = 1
(*(*ebx_2 + 0x10))()
void* esi_4 = *(ebp_2 - 0x20)
*(ebp_2 - 0x54) = *(esi_4 + 4)
*(ebp_2 - 0x53) = *(esi_4 + 8)
*(ebp_2 - 0x52) = *(esi_4 + 0xc) * *(esi_4 + 0xe)
*(ebp_2 - 0x4c) = *(ebp_2 - 0xc) + *(ebp_2 - 0x14) + *(ebp_2 - 0x10)
*(ebp_2 - 0x48) = 0x16
(*(*ebx_2 + 0x10))()
*(esi_4 + 8) *= 2
*(ebp_2 - 0x20)
*(ebp_2 - 0xc)
(*(*ebx_2 + 0x10))()
*(ebp_2 - 0x24)
*(ebp_2 - 0x14)
(*(*ebx_2 + 0x10))()
*(ebp_2 - 0x1c)
*(ebp_2 - 0x10)
(*(*ebx_2 + 0x10))()
fsbase->NtTib.ExceptionList = ExceptionList
BOOL (* var_74_3)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) =
    sub_42dcac
*(ebp_2 - 0xc)
sub_402ec4(*(ebp_2 - 0x20))
*(ebp_2 - 0x14)
sub_402ec4(*(ebp_2 - 0x24))
*(ebp_2 - 8)
sub_402ec4(*(ebp_2 - 0x18))
*(ebp_2 - 0x10)
return sub_402ec4(*(ebp_2 - 0x1c))
