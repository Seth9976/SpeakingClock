// 函数: sub_43d464
// 地址: 0x43d464
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_1 = 0xb
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
*(esp_2 - 4) = i_1
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg3
*(esp_2 - 0x10) = arg4
char* ebx = arg2
*(esp_2 - 0x14) = &var_4
*(esp_2 - 0x18) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
void* esp_9 = esp_2 - 0x1c
fsbase->NtTib.ExceptionList = esp_9
int32_t ecx = sub_45e804(arg1)

if (arg1[0xac].b != 0)
    void* ecx_1
    
    if (*(arg1 + 0x2be) u>= 2)
        if (GetTickCount() - arg1[0xad] u>= arg1[0xb7])
            sub_404b88(&arg1[0xae])
        
        uint32_t eax_11
        eax_11, ecx_1 = GetTickCount()
        arg1[0xad] = eax_11
    else
        int64_t* var_38
        sub_4577d8(ecx, &var_38)
        ecx_1 = sub_404bdc(&arg1[0xae], var_38)
    
    char eax_12 = *ebx
    int32_t var_18
    int32_t var_14
    int64_t* var_10
    
    if (eax_12 == 8)
        *(esp_9 - 4) = &var_4
        char eax_18 = sub_43d358(&var_14, &var_18, ecx_1)
        int32_t ecx_2 = *(esp_9 - 4)
        
        if (eax_18 == 0)
            int32_t eax_23
            
            if (*(arg1 + 0x2be) u>= 2)
                eax_23 = 0
            else
                int32_t var_3c
                ecx_2 = sub_4577d8(ecx_2, &var_3c)
                eax_23 = var_3c
                
                if (eax_23 != 0)
                    eax_23 = *(eax_23 - 4)
                
                eax_23.b = eax_23 s> 0
            
            if (eax_23.b == 0)
                while (true)
                    int32_t eax_46 = sub_404e48(arg1[0xae])
                    
                    if (sub_40d88c(arg1[0xae], eax_46) != 2)
                        break
                    
                    arg3 = arg1[0xae]
                    
                    if (arg3 != 0)
                        arg3 = *(arg3 - 4)
                    
                    sub_4050c0(&arg1[0xae], arg3, 1)
                
                int32_t eax_51 = arg1[0xae]
                
                if (eax_51 != 0)
                    eax_51 = *(eax_51 - 4)
                
                sub_4050c0(&arg1[0xae], eax_51, 1)
            else
                sub_4577d8(ecx_2, &var_10)
                int32_t esi = var_14
                
                while (sub_40d88c(var_10, esi) == 2)
                    esi -= 1
                
                int64_t* var_c
                *(esp_9 - 4) = &var_c
                sub_405080(esi - 1, 1, var_10)
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0xffffffff
                *(esp_9 - 0xc) = 0x14e
                *(esp_9 - 0x10) = sub_45f888(arg1)
                SendMessageA()
                int64_t* var_48
                *(esp_9 - 4) = &var_48
                sub_405080(0x7fffffff, var_18 + 1, var_10)
                char* var_44
                sub_404ea0(&var_44, var_c, var_48)
                ebx, ebp_1, arg3 = sub_457808(arg1, var_44)
                uint32_t edi_2 = zx.d(arg3.w - 1)
                *(esp_9 - 4) = edi_2 | edi_2 << 0x10
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0x142
                *(esp_9 - 0x10) = sub_45f888(ebp_1[-1])
                int32_t ecx_7 = SendMessageA()
                ebp_1[-1]
                sub_4577d8(ecx_7, &ebp_1[-0x12])
                sub_404bdc(ebp_1[-1] + 0x2b8, ebp_1[-0x12])
        else
            *(esp_9 - 4) = &var_4
            sub_43d39c()
        
        *ebx = 0
        arg3.w = 0xffb0
        sub_403e64(ebp_1[-1], arg3)
        esp_9 += 0x20
    else if (eax_12 != 9)
        if (eax_12 != 0x1b)
            if (*(arg1 + 0x2b1) != 0)
                char eax_57
                eax_57, ecx_1 = sub_43c094(arg1)
                
                if (eax_57 == 0)
                    ecx_1 = sub_43c0b8(arg1, 1)
            
            *(esp_9 - 4) = &var_4
            char eax_60 = sub_43d358(&var_14, &var_18, ecx_1)
            *(esp_9 - 4)
            
            if (eax_60 == 0)
                *ebx
                sub_404d70()
                int64_t* var_58
                sub_404ea0(&var_10, arg1[0xae], var_58)
            else
                int32_t var_50
                *(esp_9 - 4) = &var_50
                sub_405080(var_14, 1, arg1[0xae])
                *(esp_9 - 4) = var_50
                *ebx
                sub_404d70()
                int64_t* var_54
                sub_404ea0(&var_10, *(esp_9 - 4), var_54)
            
            if (not(test_bit(*data_4ac4c4, zx.d(*ebx))))
                if (sub_43d84c(arg1, var_10) != 0)
                    *ebx = 0
            else
                *(esp_9 - 4) = 0
                *(esp_9 - 8) = 0
                *(esp_9 - 0xc) = 0
                *(esp_9 - 0x10) = sub_45f888(arg1)
                void var_34
                *(esp_9 - 0x14) = &var_34
                int32_t var_30
                
                if (PeekMessageA() != 0 && var_30 == 0x102)
                    sub_404d70()
                    int64_t* var_60
                    int64_t* var_5c
                    sub_404ea0(&var_5c, var_10, var_60)
                    
                    if (sub_43d84c(arg1, var_5c) != 0)
                        *(esp_9 - 4) = 1
                        *(esp_9 - 8) = 0
                        *(esp_9 - 0xc) = 0
                        *(esp_9 - 0x10) = sub_45f888(arg1)
                        *(esp_9 - 0x14) = &var_34
                        PeekMessageA()
                        *ebx = 0
    else if (*(arg1 + 0x2b1) != 0 && sub_43c094(arg1) != 0)
        sub_43c0b8(arg1, 0)

*(esp_9 + 8)
fsbase->NtTib.ExceptionList = *esp_9
*(esp_9 + 8) = sub_43d845
sub_404bac(&ebp_1[-0x17], 5)
sub_404b88(&ebp_1[-0x12])
sub_404bac(&ebp_1[-0x11], 2)
sub_404bac(&ebp_1[-0xe], 2)
return sub_404bac(&ebp_1[-3], 2)
