// 函数: sub_4119b0
// 地址: 0x4119b0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
void* var_c = nullptr
int32_t var_10 = 0
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_1
int32_t ecx
eax_1, ecx = sub_411810(arg1)
char temp1_1

if (eax_1 != 6)
    temp1_1 = eax_1 - 6

if (eax_1 != 6 && temp1_1 != 6)
    var_8 = nullptr
    char eax_5 = sub_411a94(ecx)
    
    if (eax_5 == 0x12)
        sub_411820(arg1, &var_8, 4)
        sub_404244(arg2, var_8)
        sub_411820(arg1, *arg2, var_8 * 2)
    else if (eax_5 == 0x14)
        sub_411820(arg1, &var_8, 4)
        sub_403f68(&var_c, var_8)
        sub_411820(arg1, var_c, var_8)
        ebp_1 = sub_4052e4(var_c, arg2)
        esp = &var_8
    else
        sub_4117cc()
else
    int32_t ecx_1
    int32_t esi_2
    ecx_1, ebp_1, esi_2 = sub_4118f4(arg1, &var_10)
    esp = &var_8
    sub_404148(ecx_1, ebp_1[-3])

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_411a8e
sub_4039ec(&ebp_1[-3])
sub_4039ec(&ebp_1[-2])
return &ebp_1[-2]
