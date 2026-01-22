// 函数: sub_4557a0
// 地址: 0x4557a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4b1c64 = arg1
int32_t __saved_ebp
int32_t* var_34 = &__saved_ebp
int32_t (* var_38)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_c = nullptr
data_4b1c6c = 0
int32_t esi

if (*(arg1 + 0x8f) != 0)
    esi.w = 0xffe3
    sub_403e64(arg1, esi, &var_c)
    
    if (data_4b1c64 != 0)
        if (var_c == 0)
            int32_t edx_4
            edx_4.b = 1
            var_c = sub_454b44(sub_45171c+0x1a0, edx_4)
            data_4b1c6c = 1
        
        int32_t* esi_1 = var_c[0x10]
        
        if (sub_403df4(esi_1, &data_453234) == 0)
            int32_t* esi_2 = var_c[0x10]
            char eax_13
            
            if (esi_2[0xc] == 0)
                eax_13 = sub_403df4(esi_2, &data_453234)
            
            int32_t var_1c
            int32_t var_18
            
            if (esi_2[0xc] != 0 || eax_13 != 0)
                void var_24
                sub_418a3c(0, 0, &var_24)
                sub_457260(esi_2, &var_24, &var_1c)
                int32_t* eax_16 = var_c
                eax_16[0x13] = var_1c
                eax_16[0x14] = var_18
            else
                POINT point
                GetCursorPos(&point)
                int32_t* eax_14 = var_c
                eax_14[0x13] = point.x
                eax_14[0x14] = point.y
            
            int32_t* esi_3 = var_c
            int32_t edi_1 = var_c[0x10]
            sub_418a3c(esi_3[0x13] + *(edi_1 + 0x48), esi_3[0x14] + *(edi_1 + 0x4c), &var_1c)
            int32_t* eax_20 = var_c
            eax_20[0x15] = var_1c
            eax_20[0x16] = var_18
        else
            GetWindowRect(sub_45f888(esi_1), &var_c[0x13])
        
        int32_t* eax_21 = var_c
        eax_21[0x19] = eax_21[0x13]
        void* edi_3 = &eax_21[0x1a]
        void* esi_5 = &eax_21[0x14]
        *edi_3 = *esi_5
        void* edi_4 = edi_3 + 4
        void* esi_6 = esi_5 + 4
        *edi_4 = *esi_6
        *(edi_4 + 4) = *(esi_6 + 4)
        sub_455630(var_c, arg2, arg3)
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        fsbase->NtTib.ExceptionList = ExceptionList
else
    esi.w = 0xffdc
    sub_403e64(arg1, esi, &var_c)
    
    if (data_4b1c64 != 0)
        if (var_c == 0)
            int32_t edx_1
            edx_1.b = 1
            var_c = sub_454a34(sub_45171c+0x48, edx_1, arg1)
            data_4b1c6c = 1
        
        sub_455630(var_c, arg2, arg3)
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        fsbase->NtTib.ExceptionList = ExceptionList
return 0
