// 函数: sub_41e914
// 地址: 0x41e914
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
int32_t eax
int32_t var_8 = eax

while (sub_41dc30(ebp_1[-1]) == 0)
    ebp_1 = sub_41ee50(ebp_1[-1], arg2)

ebp_1[-1]
sub_41ecec()
ebp_1[-2] = *(ebp_1[-1] + 0x2c)
ebp_1[-3] = *(ebp_1[-1] + 0x28)
esi.w = 0xfffb
*(ebp_1[-1] + 0x2c) = sub_403e64(arg2, esi)
int32_t* var_14_1 = ebp_1
int32_t (* var_18_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
esi.w = 0xfffc
int32_t eax_12 = sub_403e64(arg2, esi)
*(ebp_1[-1] + 0x28) = eax_12

if (eax_12 == 0)
    *(ebp_1[-1] + 0x28) = *(ebp_1[-1] + 0x18)

while (sub_41dc30(ebp_1[-1]) == 0)
    ebp_1 = sub_41e664(ebp_1[-1], nullptr)

ebp_1[-1]
sub_41ecec()
int32_t var_10
fsbase->NtTib.ExceptionList = var_10
int32_t (* var_8_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41e9dd
*(ebp_1[-1] + 0x2c) = ebp_1[-2]
void* result = ebp_1[-1]
*(result + 0x28) = ebp_1[-3]
return result
