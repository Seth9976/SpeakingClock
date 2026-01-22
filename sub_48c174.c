// 函数: sub_48c174
// 地址: 0x48c174
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404bdc(arg3, arg2)
char eax_1 = *(arg1 + 0x73)

if (eax_1 u< 1)
    sub_486854(arg2, zx.d(*(arg1 + 0x70)), arg3)
else if (eax_1 == 1)
    ebp_1 = sub_486a30(arg2, &var_8)
    sub_486854(ebp_1[-1], zx.d(*(arg1 + 0x70)), arg3)
else if (eax_1 == 2 && *(arg1 + 0x82) != 0)
    *(arg1 + 0x84)
    (*(arg1 + 0x80))()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48c209
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
