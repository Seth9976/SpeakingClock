// 函数: sub_4027c8
// 地址: 0x4027c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_eax_2
int32_t __saved_eax_1 = __saved_eax_2
int32_t __saved_eax
int32_t* esp_1 = &__saved_eax
int32_t i_6 = 0x27
int32_t i

do
    esp_1[-0x400] = i_6
    esp_1 = &esp_1[-0x400]
    i = i_6
    i_6 -= 1
while (i != 1)
int32_t entry_ebx
esp_1[-0x24a] = entry_ebx
esp_1[-0x24b] = arg1
esp_1[-0x24c] = arg2
void* esp_6 = &esp_1[-0x24c]
void var_1b804
sub_403578(&var_1b804, 0x1b800, 0)
int32_t var_1f82c[0x1000]
sub_403578(&var_1f82c, 0x4000, 0)
int32_t* result = nullptr
int32_t* result_1 = nullptr
char var_1b805 = 1

for (void* i_1 = data_4ad708; i_1 != &data_4ad704; i_1 = *(i_1 + 4))
    void* edx_1
    result, edx_1 = sub_40229c(i_1)
    
    for (int32_t* j = result; j != 0; j = result)
        int32_t esi = *(j - 4)
        
        if ((esi & 1) == 0)
            if ((esi & 4) != 0)
                int32_t __saved_ebp
                *(esp_6 - 4) = &__saved_ebp
                sub_40267c(j, edx_1)
                *(esp_6 - 4)
            else if (result_1 s< 0x1000 && sub_402624(j) == 0)
                var_1b805 = 0
                var_1f82c[result_1] = (esi & 0xfffffff0) - 4
                result_1 += 1
        
        result, edx_1 = sub_402278(j)

for (void* i_2 = data_4af7ac; i_2 != &data_4af7a8; i_2 = *(i_2 + 4))
    if (result_1 s>= 0x1000)
        break
    
    result = sub_402624(i_2 + 0x10)
    
    if (result.b == 0)
        var_1b805 = 0
        result = result_1
        var_1f82c[result] = (*(i_2 + 0xc) & 0xfffffff0) - 0x14
        result_1 += 1

if (var_1b805 == 0)
    char var_1b80d_1 = 0
    int32_t var_1b81c_1 = 0
    int64_t var_2782c[0xeff]
    void* j_1 = sub_402434(0x28, &var_2782c)
    int32_t i_5 = 0x37
    void* var_1b828_1 = &data_4aa046
    void var_1b008
    void* var_1b82c_1 = &var_1b008
    void var_2002d
    int32_t i_3
    
    do
        int32_t eax_16 = zx.d(*var_1b828_1) - 4
        char var_1b80e_1 = 0
        int32_t edi = 0xff
        void* esi_7 = var_1b82c_1
        
        while (j_1 u<= &var_2002d)
            if (*esi_7 u> 0)
                if (var_1b80d_1 == 0)
                    j_1 = sub_402434(0x27, j_1)
                    var_1b80d_1 = 1
                
                void* ebx_7
                
                if (var_1b80e_1 != 0)
                    *j_1 = 0x2c
                    *(j_1 + 1) = 0x20
                    ebx_7 = j_1 + 2
                else
                    *j_1 = 0xd
                    *(j_1 + 1) = 0xa
                    void* eax_22 = sub_402318(var_1b81c_1 + 1, j_1 + 2)
                    *eax_22 = 0x20
                    *(eax_22 + 1) = 0x2d
                    *(eax_22 + 2) = 0x20
                    ebx_7 = sub_402434(8, sub_402318(eax_16, eax_22 + 3))
                    var_1b80e_1 = 1
                
                void* ebx_9
                
                if (edi u< 1)
                    ebx_9 = sub_402434(7, ebx_7)
                else if (edi == 1)
                    ebx_9 = sub_402434(6, ebx_7)
                else
                    char var_2792c
                    sub_403b48(*(esi_7 - 4), &var_2792c)
                    ebx_9 = sub_402434(zx.d(var_2792c), ebx_7)
                
                *ebx_9 = 0x20
                *(ebx_9 + 1) = 0x78
                *(ebx_9 + 2) = 0x20
                j_1 = sub_402318(*esi_7, ebx_9 + 3)
            
            edi -= 1
            esi_7 -= 8
            
            if (edi == 0xffffffff)
                break
        
        var_1b81c_1 = eax_16
        var_1b82c_1 += 0x800
        var_1b828_1 += 0x20
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)
    
    if (result_1 s> 0)
        if (var_1b80d_1 != 0)
            *j_1 = 0xd
            *(j_1 + 1) = 0xa
            *(j_1 + 2) = 0xd
            *(j_1 + 3) = 0xa
            j_1 += 4
        
        j_1 = sub_402434(0x3c, j_1)
        
        if (result_1 - 1 u>= 0)
            void* i_7 = result_1
            int32_t var_1b824_1 = 0
            int32_t (* esi_8)[0x1000] = &var_1f82c
            void* i_4
            
            do
                if (var_1b824_1 != 0)
                    *j_1 = 0x2c
                    *(j_1 + 1) = 0x20
                    j_1 += 2
                
                j_1 = sub_402318(*esi_8, j_1)
                
                if (j_1 u> &var_2002d)
                    break
                
                var_1b824_1 += 1
                esi_8 = &(*esi_8)[1]
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)
    
    sub_402434(3, j_1)
    *(esp_6 - 4) = 0x2010
    *(esp_6 - 8) = &data_402c28
    *(esp_6 - 0xc) = &var_2782c
    *(esp_6 - 0x10) = 0
    result = MessageBoxA()

*esp_6
*(esp_6 + 4)
*(esp_6 + 8)
return result
