// 函数: sub_49299c
// 地址: 0x49299c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_1 = 7
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t entry_ebx
*(esp_2 - 4) = entry_ebx
*(esp_2 - 8) = arg2
*(esp_2 - 0xc) = &var_4
*(esp_2 - 0x10) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
void* esp_7 = esp_2 - 0x14
fsbase->NtTib.ExceptionList = esp_7
int32_t var_10 = *(arg1 + 0x50)
int32_t var_3c
int64_t* var_8

if ((*(arg1 + 0x1c) & 0x10) == 0 && (*(arg1 + 0x1c) & 1) == 0)
    esp_7 += 0x18
    
    if ((*(**(arg1 + 0x50) + 0x1c))() != 0)
        *(esp_7 - 4) = &var_4
        *(esp_7 - 8) = j_sub_40443c
        *(esp_7 - 0xc) = fsbase->NtTib.ExceptionList
        void* esp_10 = esp_7 - 0xc
        fsbase->NtTib.ExceptionList = esp_10
        sub_49195c(arg1)
        int32_t* ebx = *(arg1 + 4)
        
        if (sub_403df4(ebx, &data_488bac) != 0)
            int32_t* esi = ebx
            
            switch (zx.d(*(esi + 0x52)))
                case 0
                    int32_t var_10_1 = *(arg1 + 0x50)
                case 1
                    int32_t var_28
                    sub_404e54(&var_28, *(sub_490638(*(esi + 0x51), 1, &var_28) + 0x54))
                    sub_492910(var_28, zx.d(*(arg1 + 0x4c)), *(arg1 + 0x50))
                case 2
                    ebp_1 = sub_43124c(*(arg1 + 0x50), data_4af7f4, zx.d(*(arg1 + 0x4c)))
                case 3
                    char ebx_1 = *(esi + 0x51)
                    
                    if (ebx_1 u>= 2)
                        if (ebx_1 == 3)
                            int64_t* var_14
                            sub_409ae8(esi[0x15], &var_14)
                            sub_48675c(var_14, &var_8)
                        else
                            esi = sub_490638(ebx_1, 1, &var_8)
                        
                        *(esp_10 - 4) = var_8
                        int32_t var_18
                        *(esp_10 - 8) = &var_18
                        int32_t var_1c
                        sub_409b1c(esi[0x15], &var_1c)
                        int32_t ecx_4 = sub_405080(3, 1, var_1c)
                        *(esp_10 - 8) = var_18
                        *(arg1 + 0x4c)
                        int32_t var_20
                        sub_409340(ecx_4, &var_20)
                        *(esp_10 - 0xc) = var_20
                        int64_t* var_24
                        sub_488c80(1, 1, &var_24)
                        *(esp_10 - 0x10) = var_24
                        sub_404f1c(&var_8, 4)
                        *(arg1 + 0x50)
                        *(arg1 + 0x4c)
                        ebp_1 = sub_489744(var_8)
                    else
                        *(arg1 + 0x50)
                        *(arg1 + 0x4c)
                        ebp_1 = sub_489744(esi[0x15])
                case 4
                    char ebx_2 = *(esi + 0x51)
                    
                    if (ebx_2 == 3)
                        int64_t* var_2c
                        sub_409ae8(esi[0x15], &var_2c)
                        sub_48675c(var_2c, &var_8)
                    else
                        esi = sub_490638(ebx_2, 1, &var_8)
                    
                    *(esp_10 - 4) = var_8
                    int32_t var_30
                    *(esp_10 - 8) = &var_30
                    int32_t var_34
                    sub_409b1c(esi[0x15], &var_34)
                    int32_t ecx_11 = sub_405080(3, 1, var_34)
                    *(esp_10 - 8) = var_30
                    *(arg1 + 0x4c)
                    int32_t var_38
                    sub_409340(ecx_11, &var_38)
                    *(esp_10 - 0xc) = var_38
                    sub_488c80(1, 1, &var_3c)
                    *(esp_10 - 0x10) = var_3c
                    sub_404f1c(&var_8, 4)
                    (*(**(arg1 + 0x50) + 0x4c))()
            
            *(esp_10 + 8)
            fsbase->NtTib.ExceptionList = *esp_10
            *(esp_10 + 8) = 0x492c1e
            return sub_491964(ebp_1[-2], 0)
        
        sub_4045c8()
        esp_7 = esp_10 + 0xc

*(esp_7 + 8)
fsbase->NtTib.ExceptionList = *esp_7
*(esp_7 + 8) = sub_492c48
sub_404bac(&var_3c, 0xb)
int32_t* result = &var_8
sub_404b88(result)
return result
