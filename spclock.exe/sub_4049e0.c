// 函数: sub_4049e0
// 地址: 0x4049e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
int32_t ebp
int32_t var_10 = ebp
int32_t* esp_1 = &var_10

if (data_4af7ec == 0 && data_4ad044 != 0)
    do
        int32_t eax_1 = data_4ad044
        data_4ad044 = 0
        eax_1()
    while (data_4ad044 != 0)

if (data_4aa004 != 0)
    sub_4048c0()
    sub_404954(0x10)
    data_4aa004 = 0

while (true)
    if (data_4af7ec == 2 && data_4aa000 == 0)
        data_4af7d0 = 0
    
    sub_404768()
    
    if (data_4af7ec u<= 1 || data_4aa000 != 0)
        int32_t* edi_1 = data_4af7d4
        
        if (edi_1 != 0)
            sub_4064e0(edi_1)
            void* ebp_1 = data_4af7d4
            int32_t esi_2 = *(ebp_1 + 0x10)
            
            if (esi_2 != *(ebp_1 + 4) && esi_2 != 0)
                *(esp_1 - 4) = esi_2
                FreeLibrary()
    
    sub_404740()
    
    if (data_4af7ec == 1)
        data_4af7e8()
    
    if (data_4af7ec != 0)
        sub_404924()
        esp_1 = &esp_1[3]
    
    if (data_4af7c4 == 0)
        break
    
    __builtin_memcpy(&data_4af7c4, data_4af7c4, 0x2c)

if (data_4ad024 != 0)
    data_4ad024()

*(esp_1 - 4) = data_4aa000
ExitProcess()
noreturn
