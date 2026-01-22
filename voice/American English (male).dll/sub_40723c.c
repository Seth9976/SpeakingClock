// 函数: sub_40723c
// 地址: 0x40723c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t var_18 = 0
char* edi = arg3
char* esi = arg1
int32_t var_8 = 0
void* ecx = &arg1[arg6]
char* var_c = edi
int32_t var_10 = 0
int32_t var_14 = 0
int32_t var_18_1 = 0
label_407265:
void* edx = arg2

if (edx != 0)
    while (esi != ecx)
        uint32_t eax
        eax.b = *esi
        esi = &esi[1]
        
        if (eax.b == 0x25)
            if (esi == ecx)
                break
            
            eax.b = *esi
            esi = &esi[1]
            
            if (eax.b != 0x25)
                void* ebx_1 = &esi[0xfffffffe]
                void* var_1c_1 = ebx_1
                
                while (true)
                    char var_1d_1 = eax.b
                    
                    if (eax.b == 0x2d)
                        if (esi == ecx)
                            goto label_407278
                        
                        eax.b = *esi
                        esi = &esi[1]
                    
                    eax, ecx, edx = sub_40731e(eax, edx, ecx, ebp, esi, edi, arg5, arg4, 0)
                    
                    if (eax.b != 0x3a)
                        if (eax.b == 0x2e)
                            if (esi == ecx)
                                break
                            
                            eax.b = *esi
                            esi = &esi[1]
                            eax, ecx, edx = sub_40731e(eax, edx, ecx, ebp, esi, edi)
                        
                        int32_t var_28_1 = 0xffffffff
                        char* var_2c_1 = esi
                        void* count
                        eax, count = sub_407366(eax.b, ebp)
                        void* edx_1 = edx
                        void* count_3 = ebx_1 - count
                        
                        if (ebx_1 u< count)
                            count_3 = nullptr
                        
                        if (var_1d_1 == 0x2d)
                            void* temp4_1 = edx_1
                            edx_1 -= count
                            
                            if (temp4_1 u< count)
                                count += edx_1
                                edx_1 = nullptr
                            
                            edi, esi, count = __builtin_memcpy(edi, esi, count)
                        
                        void* count_1 = count_3
                        void* edx_2 = edx_1 - count_1
                        
                        if (edx_1 u< count_1)
                            count_1 += edx_2
                            edx_2 = nullptr
                        
                        eax.b = 0x20
                        int32_t ecx_1
                        int32_t edi_1
                        edi_1, ecx_1 = __builtin_memset(edi, 0x20, count_1)
                        void* count_2 = count
                        arg2 = edx_2 - count_2
                        
                        if (edx_2 u< count_2)
                            count_2 += arg2
                            arg2 = nullptr
                        
                        edi = __builtin_memcpy(edi_1, esi, count_2)
                        
                        if (var_14 != 0)
                            sub_407230(&var_14)
                        
                        esi = var_2c_1
                        goto label_407265
                    
                    void* var_10_1 = ebx_1
                    
                    if (esi == ecx)
                        goto label_407278
                    
                    eax.b = *esi
                    esi = &esi[1]
                
                break
        
        *edi = eax.b
        edi = &edi[1]
        void* temp1_1 = edx
        edx -= 1
        
        if (temp1_1 == 1)
            break

label_407278:
void* result = edi - var_c
sub_407593(result, ebp)
return result
