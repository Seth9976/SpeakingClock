// 函数: sub_4038fc
// 地址: 0x4038fc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t ebp
int32_t var_10 = ebp
int32_t* esp_1 = &var_10
int32_t* esi_1 = &data_413000

if (data_414658 == 0 && data_414040 != 0)
    do
        int32_t edx_1 = data_414040
        data_414040 = 0
        edx_1()
    while (data_414040 != 0)

if (data_413004 != 0)
    sub_403870(sub_4037e4())
    data_413004 = 0

while (true)
    if (data_414658 == 2 && *esi_1 == 0)
        data_41463c = 0
    
    sub_403610()
    
    if (data_414658 u<= 1 || *esi_1 != 0)
        int32_t* eax_2 = data_414640
        
        if (eax_2 != 0)
            sub_404ee0(eax_2)
            void* edx_2 = data_414640
            int32_t eax_3 = *(edx_2 + 0x10)
            
            if (eax_3 != *(edx_2 + 4) && eax_3 != 0)
                *(esp_1 - 4) = eax_3
                FreeLibrary()
    
    sub_4035e8()
    
    if (data_414658 == 1)
        data_414654()
    
    if (data_414658 != 0)
        sub_403840()
        esp_1 = &esp_1[3]
    
    if (data_414630 == 0)
        break
    
    int32_t eax_5 = data_414630
    *(esp_1 - 4) = esi_1
    __builtin_memcpy(&data_414630, eax_5, 0x2c)
    esi_1 = *(esp_1 - 4)

if (data_414024 != 0)
    data_414024()

*(esp_1 - 4) = *esi_1
ExitProcess()
noreturn
