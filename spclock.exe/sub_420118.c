// 函数: sub_420118
// 地址: 0x420118
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t edx
ecx, edx = sub_41dae8(*(arg1 - 4), 0xa)
int32_t var_14 = 0
edx.b = 1
int32_t* eax_4
int32_t ecx_1
int32_t edx_1
eax_4, ecx_1, edx_1 = sub_403c38(ecx, edx)
int32_t* var_28_1 = &var_4
int32_t (* var_2c_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
edx_1.b = 1
int32_t var_14_1 = sub_403c38(ecx_1, edx_1)
void* (* var_1c)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
sub_41e04c(*(arg1 - 4), &var_1c, 4)
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(var_1c)
sub_41c8f8(eax_4, eax_10, edx_3)
sub_41e04c(*(arg1 - 4), eax_4[1], var_1c)
int32_t edx_5
edx_5.b = 1
int32_t* eax_15 = sub_41d37c(eax_4, edx_5, sub_4182b4+0x108, 0x400)
int32_t* var_28_4 = &var_4
int32_t (* var_2c_3)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* ebx_1
void* ebp_1
ebx_1, ebp_1 = sub_41fa14(eax_15, &var_8)
sub_41e04c(*(ebp_1 - 0x14), ebp_1 - 0x18, 4)
int32_t eax_19
int32_t edx_8
edx_8:eax_19 = sx.q(*(ebp_1 - 0x18))
sub_41c8f8(*(ebp_1 - 0x10), eax_19, edx_8)
sub_41e04c(*(ebp_1 - 0x14), *(*(ebp_1 - 0x10) + 4), *(ebp_1 - 0x18))
char eax_24
int32_t edx_11
void* ebp_2
eax_24, edx_11, ebp_2 = sub_415da0(*(ebp_1 - 4), ebp_1 - 0x1c)
char eax_27

if (eax_24 != 0)
    sub_406550(ebp_2 - 8)
    eax_27, edx_11 = sub_40eb48(*(ebp_2 - 0x1c), 0x4202d0, ebp_2 - 8)

if (eax_24 == 0 || eax_27 == 0)
    edx_11.b = 1
    sub_40451c(sub_40cf6c(sub_41715c+0x210, edx_11, data_4ac41c))

*ebx_1 = *(*(ebp_2 - 0x1c) + 4)
*(ebp_2 - 0x10)
int32_t entry_ebx
(*(**(ebp_2 - 8) + 0xc))(entry_ebx)
fsbase->NtTib.ExceptionList = entry_ebx
var_1c = sub_42027e
return sub_403c68(*(ebp_2 - 0x14))
