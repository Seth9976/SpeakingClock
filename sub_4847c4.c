// 函数: sub_4847c4
// 地址: 0x4847c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_8 = 0
int32_t* var_14 = arg1
void* eax_2 = sub_409ea0(arg3 + 1)
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t temp0 = divs.dp.d(sx.q(arg3), 2)
*arg4 = 0
void* eax_7 = eax_2 + temp0
int32_t* var_30 = &var_4
int32_t (* var_34)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*var_14 != 0)
    var_14[1]
    esp_1 = &var_14
    *arg4 = (***var_14)(temp0)

if (*arg4 s> 0)
    *(eax_7 + *arg4) = 0
    
    if (*(eax_7 + *arg4 - 1) == 0xd)
        *(eax_7 + *arg4 - 1) = 0
    
    *arg4 = sub_484730(eax_2, eax_7)
    sub_4030d0(eax_2, arg2, *arg4)

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[5]
fsbase->NtTib.ExceptionList = esp_1[3]
esp_1[5] = 0x4848b0
return sub_409eec(eax_2)
