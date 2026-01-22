// 函数: sub_4285f8
// 地址: 0x4285f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t i_2 = 6
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t entry_ebx
*(esp_2 - 4) = entry_ebx
*(esp_2 - 8) = arg3
*(esp_2 - 0xc) = &var_4
*(esp_2 - 0x10) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x14
sub_428174(arg1)
int32_t* var_18 = nullptr
void* esp_8 = &esp_2[1]
int32_t ebx_1 = (*(*arg2 + 0x14))() - 1
void* var_34
char* var_8

if (ebx_1 s>= 0)
    int32_t i_3 = ebx_1 + 1
    int32_t var_14_1 = 0
    int32_t i_1
    
    do
        (*(*arg2 + 0xc))()
        void* var_1c
        sub_40905c(var_1c, &var_8)
        
        if (var_8 != 0 && *var_8 != 0x3b)
            char* eax_7
            
            if (*var_8 != 0x5b)
                eax_7 = nullptr
            else
                eax_7 = var_8
                
                if (eax_7 != 0)
                    eax_7 = *(eax_7 - 4)
                
                eax_7.b = *(var_8 + eax_7 - 1) == 0x5d
            
            if (eax_7.b != 0)
                sub_4050c0(&var_8, 1, 1)
                char* eax_10 = var_8
                
                if (eax_10 != 0)
                    eax_10 = *(eax_10 - 4)
                
                sub_4052a8(&var_8, eax_10 - 1)
                int32_t var_20
                sub_40905c(var_8, &var_20)
                var_18 = sub_428104(arg1)
            else if (var_18 != 0)
                void* eax_16 = sub_405164(&data_4287b0, var_8)
                
                if (eax_16 s<= 0)
                    (*(*var_18 + 0x38))()
                else
                    void* var_2c
                    *(esp_8 - 4) = &var_2c
                    sub_405080(eax_16 - 1, 1, var_8)
                    int32_t var_28
                    sub_40905c(var_2c, &var_28)
                    *(esp_8 - 4) = var_28
                    *(esp_8 - 8) = &data_4287b0
                    *(esp_8 - 0xc) = &var_34
                    sub_405080(0x7fffffff, eax_16 + 1, var_8)
                    int32_t var_30
                    sub_40905c(var_34, &var_30)
                    *(esp_8 - 0xc) = var_30
                    int32_t var_24
                    sub_404f1c(&var_24, 3)
                    (*(*var_18 + 0x38))()
        
        var_14_1 += 1
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(esp_8 + 8)
fsbase->NtTib.ExceptionList = *esp_8
*(esp_8 + 8) = sub_4287a1
sub_404bac(&var_34, 7)
char** result = &var_8
sub_404b88(result)
return result
