// 函数: sub_425d34
// 地址: 0x425d34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t* var_c = nullptr
int32_t var_10 = 0
int32_t entry_ebx
int32_t var_14 = entry_ebx + 1
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10_1 = arg2
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0)
    sub_404bdc(arg1 + 0x20, arg3)

if (*(*(arg1 + 0x14) + 8) == 0)
    arg2.b = 1
    sub_40451c(sub_40cf6c(sub_424df1+0x167, arg2, &data_4251f0))

int32_t ebx_2 = *(*(arg1 + 0x14) + 8) - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        sub_406568(&var_8, *(sub_41a0f4(*(arg1 + 0x14), esi_1) + 4))
        sub_406594(&var_c, var_8, 0x425e08)
        esp_1 = &esp_1[8]
        
        if ((*(*var_c + 0x30))() != 0)
            (*(*var_c + 0x34))()
            break
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_425dfe
sub_406550(&var_c)
int32_t* result = &var_8
sub_406550(result)
return result
