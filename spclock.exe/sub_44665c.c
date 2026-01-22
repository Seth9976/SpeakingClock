// 函数: sub_44665c
// 地址: 0x44665c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
void* i = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_20_1 = arg2
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
void* ecx
void* ebx_3 = sub_446614(sub_446614(arg1, &var_8, ecx), &i, arg2)

if (i != 0)
    if (*sub_4099cc(var_8) != 0x5c)
        sub_404e54(&var_8, 0x446774)
    
    do
        if (*i != 0x5c)
            void* i_1 = i
            
            if (i_1 != 0)
                i_1 = *(i_1 - 4)
            
            if (i_1 s> 3)
                i_1.b = *(i + 1) != 0x3a
            else
                i_1.b = 1
            
            if (i_1.b == 0)
                i_1.b = *(i + 2) != 0x5c
            else
                i_1.b = 1
            
            if (i_1.b != 0)
                sub_404ea0(&i, var_8, i)
        
        void* ecx_6 = (*(**(*(arg2 - 8) + 0x84) + 0x38))()
        esp_1[4] = arg2
        void* eax_20 = sub_446614(ebx_3, &i, ecx_6)
        esp_1[4]
        esp_1 = &esp_1[5]
        ebx_3 = eax_20
    while (i != 0)
else
    (*(**(*(arg2 - 8) + 0x84) + 0x38))()
    esp_1 = &var_8

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_446767
return sub_404bac(&i, 2)
