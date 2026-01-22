// 函数: sub_4090e8
// 地址: 0x4090e8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
void* var_2c
__builtin_memset(&var_2c, 0, 0x11)
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t edi_1 = 0
int16_t var_16 = 0
int16_t var_18 = 0
char var_d = 0
char eax_1 = sub_408fa4(data_41468c)
int32_t var_8 = 0

if (data_41468c == 0 || *data_41468c != 0x67)
    if (sub_40aa40(0x40941c, data_41468c) s> 0)
        var_8 = data_41476c
else
    sub_408ff0(arg1, arg2)
    void* var_24
    sub_403ee0(*arg2 - 1, 1, arg1, &var_24)
    int32_t var_20
    sub_406a54(var_24, &var_20)
    var_8 = sub_409038(var_20)

char var_19
int16_t var_10

if (sub_408e4c(&var_10, arg2, arg1, &var_19) != 0)
    int16_t* ecx_2
    ecx_2.b = data_414689
    void var_1a
    int16_t var_12
    
    if (sub_408f6c(arg1, arg2, ecx_2) != 0 && sub_408e4c(&var_12, arg2, arg1, &var_1a) != 0)
        int16_t* ecx_3
        ecx_3.b = data_414689
        
        if (sub_408f6c(arg1, arg2, ecx_3) == 0)
            int16_t eax_28
            int16_t* ecx_4
            eax_28, ecx_4 = sub_40822c()
            edi_1 = eax_28
            
            if (eax_1 != 1)
                var_16 = var_10
                var_18 = var_12
            else
                var_18 = var_10
                var_16 = var_12
            
        label_4092fc:
            ecx_4.b = data_414689
            sub_408f6c(arg1, arg2, ecx_4)
            sub_408e28(arg1, arg2)
            int32_t* edx_12
            
            if (data_41474c != 0)
                int32_t eax_31
                eax_31, ecx_4 = sub_403f20("ddd", data_41468c)
                
                if (eax_31 != 0)
                    char* eax_32
                    eax_32.b = *data_4146a0
                    eax_32.b -= 0x30
                    char temp4_1 = eax_32.b
                    eax_32.b -= 0xa
                    
                    if (temp4_1 u>= 0xa)
                        while (true)
                            if (sub_403c88(arg1) s>= *arg2 && *(arg1 + *arg2 - 1) != 0x20)
                                *arg2 += 1
                                continue
                            
                            sub_408e28(arg1, arg2)
                            
                            if (sub_403c88(arg1) s< *arg2)
                                break
                            
                            void* var_28
                            sub_403ee0(sub_403c88(data_414698), *arg2, arg1, &var_28)
                            int32_t eax_44
                            eax_44, ecx_4, edx_12 = sub_406a04(data_414698, var_28)
                            
                            if (eax_44 == 0)
                                break
                            
                            sub_403ee0(sub_403c88(data_41469c), *arg2, arg1, &var_2c)
                            int32_t eax_49
                            eax_49, ecx_4, edx_12 = sub_406a04(data_41469c, var_2c)
                            
                            if (eax_49 == 0)
                                break
                    else
                        ecx_4, edx_12 = sub_408ff0(arg1, arg2)
            
            ecx_4.w = var_18
            edx_12.w = var_16
            char var_d_1 = sub_407f9c(ecx_4.w, edx_12.w, edi_1, arg3)
        else
            char var_1b
            int16_t var_14
            int16_t eax_19
            void* edx_8
            eax_19, edx_8 = sub_408e4c(&var_14, arg2, arg1, &var_1b)
            
            if (eax_19.b != 0)
                eax_19.b = eax_1
                char temp2_1 = eax_19.b
                eax_19.b -= 1
                char var_1c_1
                
                if (temp2_1 u< 1)
                    edi_1 = var_14
                    eax_19.b = var_1b
                    var_1c_1 = eax_19.b
                    var_16 = var_10
                    var_18 = var_12
                else if (temp2_1 == 1)
                    edi_1 = var_14
                    eax_19.b = var_1b
                    var_1c_1 = eax_19.b
                    var_16 = var_12
                    var_18 = var_10
                else
                    char temp3_1 = eax_19.b
                    eax_19.b -= 1
                    
                    if (temp3_1 == 1)
                        edi_1 = var_10
                        eax_19.b = var_19
                        var_1c_1 = eax_19.b
                        var_16 = var_12
                        var_18 = var_14
                
                if (var_8 s> 0)
                    int32_t* var_48_5 = &var_4
                    edi_1 = sub_40908c(zx.d(edi_1), edx_8)
                else if (var_1c_1 u<= 2)
                    int16_t* ecx_6 = zx.d(sub_40822c()) - zx.d(data_4130e0)
                    edi_1 += (divs.dp.d(sx.q(ecx_6), 0x64)).w * 0x64
                    
                    if (data_4130e0 u> 0 && ecx_6 s> zx.d(edi_1))
                        edi_1 += 0x64
                
                goto label_4092fc

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_3c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40940a
return sub_403a10(&var_2c, 4)
