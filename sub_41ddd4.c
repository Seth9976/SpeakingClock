// 函数: sub_41ddd4
// 地址: 0x41ddd4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_8 = 0
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void* eax_1 = *(arg1 + 0x30)

if (eax_1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41df11
    int32_t* result = &var_8
    sub_404b88(result)
    return result

int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(eax_1 + 8) - 1

if (eax_3 s>= 0)
    int32_t var_14_1 = eax_3 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t* eax_7 = sub_41a0f4(*(ebp_1[-2] + 0x30), esi_1)
        sub_404c20(&ebp_1[-1], eax_7[5])
        (*(*ebp_1[-2] + 0x24))()
        esp_1 = &esp_1[0xc]
        int32_t* eax_11
        void* ebp_2
        eax_11, ebp_2 = sub_41d5fc(eax_7[2], ebp_1[-1])
        *(ebp_2 - 0xc) = eax_11
        
        if (*(ebp_2 - 0xc) == 0 && *(*(ebp_2 - 8) + 0x7a) != 0)
            *(esp_1 - 4) = ebp_2 - 0xc
            void* edi_1 = *(ebp_2 - 8)
            *(ebp_2 - 4)
            *(ebp_2 - 8)
            *(edi_1 + 0x7c)
            (*(edi_1 + 0x78))()
        
        ebp_1 = sub_41dd58(sub_41a0f4(*(*(ebp_2 - 8) + 0x30), esi_1))
        char eax_19
        
        if (ebp_1[-3] == 0)
            eax_19 = sub_41d520(eax_7)
        
        if (ebp_1[-3] != 0 || eax_19 == 0)
            ebp_1[-3]
            (**eax_7)()
        else
            int32_t eax_22
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_3
            eax_22, ecx_3 = sub_41a0f4(*(ebp_1[-2] + 0x30), esi_1)
            sub_41a434(data_4b19d0, eax_22, ecx_3)
            sub_41a240(*(ebp_1[-2] + 0x30), esi_1, 0)
        
        esi_1 += 1
        i = ebp_1[-4]
        ebp_1[-4] -= 1
    while (i != 1)

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = 0x41def4
return sub_41df3c(ebp_1[-2])
