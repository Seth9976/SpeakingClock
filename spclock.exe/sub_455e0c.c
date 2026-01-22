// 函数: sub_455e0c
// 地址: 0x455e0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
void* eax_1 = sub_41a4bc(data_4b1c98)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *(eax_1 + 8) - 1

if (eax_4 s>= 0)
    int32_t var_10_1 = eax_4 + 1
    int32_t var_8_1 = 0
    int32_t i
    
    do
        ebp_1[-4] = sub_41a0f4(ebp_1[-2], ebp_1[-1])
        char eax_9
        eax_9, ebp_1 = sub_42c5ac(ebp_1[-4])
        esp_1 = &esp_1[6]
        
        if (eax_9 != 0)
            *(esp_1 - 4) = ebp_1
            *(esp_1 - 8) = j_sub_40443c
            *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = esp_1 - 0xc
            sub_456048(ebp_1[-4])
            sub_4045c8()
            int32_t result = sub_4045c8()
            *ebp_1
            return result
        
        ebp_1[-1] += 1
        i = ebp_1[-3]
        ebp_1[-3] -= 1
    while (i != 1)

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = 0x455ec3
return sub_41a520(data_4b1c98)
