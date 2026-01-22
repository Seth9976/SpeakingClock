// 函数: sub_48df58
// 地址: 0x48df58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_20 = *arg9
int32_t var_1c
int32_t* edi = &var_1c
void* esi_1 = &arg9[1]
*edi = *esi_1
void* edi_1 = &edi[1]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* ExceptionList_1 = arg1
int32_t* var_8 = arg3
SetRectEmpty(arg4)
char result = sub_406cb8(arg2)

if (result == 0)
    int32_t edi_4 = 0
    int32_t var_2c_1 = 0
    int32_t var_14
    void* ExceptionList_2 = var_14 - var_1c
    int32_t var_18
    int32_t eax_4 = var_18 - var_20
    char var_3d_1 = 0
    int32_t var_54
    
    if ((arg8.w & 8) == 8)
        var_3d_1 = 1
        void* edx_2 = arg2[3] - arg2[1] - ExceptionList_2
        int32_t edx_3 = edx_2 s>> 1
        bool c_1 = unimplemented  {sar edx, 0x1}
        
        if (edx_2 s>> 1 s< 0)
            edx_3 = adc.d(edx_3, 0, c_1)
        
        int32_t eax_9 = arg2[2] - *arg2 - eax_4
        int32_t eax_10 = eax_9 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_9 s>> 1 s< 0)
            eax_10 = adc.d(eax_10, 0, c_2)
        
        sub_406c1c(eax_4, edx_3 + arg2[1], eax_10 + *arg2, &var_54, ExceptionList_2)
    
    void* ExceptionList
    void var_74
    int32_t var_64
    int32_t var_50
    
    if ((arg8.w & 0x10) == 0x10)
        SetStretchBltMode(sub_42c73c(var_8), COLORONCOLOR)
        var_3d_1 = 2
        edi_4 = arg2[3] - arg2[1]
        var_2c_1 = arg2[2] - *arg2
        sub_406c1c(var_2c_1, arg2[1], *arg2, &var_54, edi_4)
        
        if ((arg8.w & 0x600) != 0x600)
            if ((arg8.w & 0x400) == 0x400)
                int32_t eax_24 =
                    sub_403370(float.t(var_2c_1) / float.t(eax_4) * float.t(ExceptionList_2))
                sub_406c1c(var_2c_1, arg2[1], *arg2, &var_54, eax_24)
            
            if ((arg8.w & 0x200) == 0x200)
                sub_406c1c(sub_403370(float.t(edi_4) / float.t(ExceptionList_2) * float.t(eax_4)), 
                    arg2[1], *arg2, &var_54, edi_4)
        else
            sub_406c1c(var_2c_1, 0, 0, &var_64, edi_4)
            int32_t* var_88_5 = &var_64
            ExceptionList = &var_74
            sub_406c1c(eax_4, 0, 0, ExceptionList, ExceptionList_2)
            sub_4901a4(&var_74, var_88_5, &var_54)
            var_54 += *arg2
            var_50 += arg2[1]
    
    if ((arg8.w & 0x20) == 0x20)
        var_3d_1 = 3
        
        if (ExceptionList_2 != 0 && eax_4 != 0)
            edi_4 = divs.dp.d(sx.q(arg2[3] - arg2[1]), ExceptionList_2) + 1
            var_2c_1 = divs.dp.d(sx.q(arg2[2] - *arg2), eax_4) + 1
    
    if (var_3d_1 == 0)
        sub_406c1c(eax_4, arg2[1], *arg2, &var_54, ExceptionList_2)
    
    char eax_42
    int32_t edx_13
    eax_42, edx_13 = sub_406cb8(&var_54)
    int32_t var_4c
    int32_t var_48
    
    if (eax_42 == 0)
        sub_406ce8(var_4c, var_50, var_54, arg4, var_48)
    else
        *arg4 = *arg2
        void* edi_8 = &arg4[1]
        void* esi_7 = &arg2[1]
        *edi_8 = *esi_7
        void* edi_9 = edi_8 + 4
        void* esi_8 = esi_7 + 4
        *edi_9 = *esi_8
        *(edi_9 + 4) = *(esi_8 + 4)
    
    if ((arg8.w & 0x80) != 0x80)
        int32_t __saved_ebp
        
        if ((arg8.w & 0x100) == 0x100 && arg5 != 0)
            COLORREF color = SetBkColor(sub_42c73c(var_8), 0xffffff)
            COLORREF color_1 = SetTextColor(sub_42c73c(var_8), 0)
            
            if (var_3d_1 u< 3)
                int32_t* var_88_17 = &__saved_ebp
                ExceptionList = ExceptionList_1
                sub_48de78(var_4c, var_50, var_54, arg5, ExceptionList, var_48, var_88_17)
            else if (var_3d_1 == 3 && edi_4 s>= 0)
                int32_t i_5 = edi_4 + 1
                int32_t var_28_2 = 0
                int32_t i
                
                do
                    if (var_2c_1 s>= 0)
                        int32_t j_4 = var_2c_1 + 1
                        int32_t edi_19 = 0
                        int32_t j
                        
                        do
                            int32_t* var_88_18 = &__saved_ebp
                            ExceptionList = ExceptionList_1
                            sub_48de78(eax_4, arg2[1] + var_28_2 * ExceptionList_2, 
                                *arg2 + edi_19 * eax_4, arg5, ExceptionList, ExceptionList_2, 
                                var_88_18)
                            edi_19 += 1
                            j = j_4
                            j_4 -= 1
                        while (j != 1)
                    
                    var_28_2 += 1
                    i = i_5
                    i_5 -= 1
                while (i != 1)
            
            SetTextColor(sub_42c73c(var_8), color_1)
            return SetBkColor(sub_42c73c(var_8), color)
        
        int32_t esi_5
        esi_5.w = arg8.w & 0x40
        
        if (esi_5.w == 0x40)
            edx_13.b = 1
            int32_t* eax_88
            int32_t edx_24
            eax_88, edx_24 = sub_430618(sub_42a104+0x140, edx_13)
            edx_24.b = 1
            int32_t* eax_89 = sub_430618(sub_42a104+0x140, edx_24)
            int32_t* var_88_21 = &__saved_ebp
            int32_t (* var_8c_21)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            void** esp_1 = &ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            
            if (arg6 != 0)
                (*(*eax_88 + 0x38))()
                esp_1 = &var_8
            
            *(esp_1 - 4) = eax_88
            *(esp_1 - 8) = arg7
            sub_48da60(eax_89, &var_20, ExceptionList_1)
            *(esp_1 - 4) = 0xffffff
            *(esp_1 - 8) = sub_42c73c(var_8)
            int32_t eax_96 = SetBkColor()
            *(esp_1 - 4) = 0
            *(esp_1 - 8) = sub_42c73c(var_8)
            int32_t eax_99 = SetTextColor()
            void* esp_10 = esp_1
            
            if (var_3d_1 u< 3)
                *(esp_10 - 4) = &__saved_ebp
                *(esp_10 - 8) = var_48
                *(esp_10 - 0xc) = sub_430bec(eax_88)
                *(esp_10 - 0x10) = sub_430bec(eax_89)
                sub_48dda8(var_4c, var_50, var_54)
                *(esp_10 - 4)
            else if (var_3d_1 == 3 && edi_4 s>= 0)
                int32_t i_6 = edi_4 + 1
                int32_t var_28_3 = 0
                int32_t i_1
                
                do
                    if (var_2c_1 s>= 0)
                        int32_t j_5 = var_2c_1 + 1
                        int32_t edi_21 = 0
                        int32_t j_1
                        
                        do
                            *(esp_10 - 4) = &__saved_ebp
                            *(esp_10 - 8) = ExceptionList_2
                            *(esp_10 - 0xc) = sub_430bec(eax_88)
                            *(esp_10 - 0x10) = sub_430bec(eax_89)
                            sub_48dda8(eax_4, arg2[1] + var_28_3 * ExceptionList_2, 
                                *arg2 + edi_21 * eax_4)
                            *(esp_10 - 4)
                            edi_21 += 1
                            j_1 = j_5
                            j_5 -= 1
                        while (j_1 != 1)
                    
                    var_28_3 += 1
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
            
            *(esp_10 - 4) = eax_99
            *(esp_10 - 8) = sub_42c73c(var_8)
            SetTextColor()
            *(esp_10 - 4) = eax_96
            *(esp_10 - 8) = sub_42c73c(var_8)
            SetBkColor()
            *(esp_10 + 8)
            fsbase->NtTib.ExceptionList = *esp_10
            *(esp_10 + 8) = 0x48e56b
            sub_403c68(eax_88)
            return sub_403c68(eax_89)
        
        result = var_3d_1 - 3
        
        if (var_3d_1 u< 3)
            sub_406ce8(eax_4, var_1c, var_20, &var_64, ExceptionList_2)
            int32_t* var_88_23 = &var_64
            ExceptionList = &var_74
            sub_406ce8(var_4c, var_50, var_54, ExceptionList, var_48)
            return sub_42c124(ExceptionList_1, &var_74, var_8, var_88_23)
        
        if (var_3d_1 == 3 && edi_4 s>= 0)
            int32_t i_7 = edi_4 + 1
            int32_t var_28_4 = 0
            int32_t i_2
            
            do
                if (var_2c_1 s>= 0)
                    int32_t j_6 = var_2c_1 + 1
                    int32_t edi_23 = 0
                    int32_t j_2
                    
                    do
                        sub_406ce8(eax_4, var_1c, var_20, &var_64, ExceptionList_2)
                        int32_t* var_88_25 = &var_64
                        ExceptionList = &var_74
                        sub_406ce8(eax_4, arg2[1] + var_28_4 * ExceptionList_2, 
                            *arg2 + edi_23 * eax_4, ExceptionList, ExceptionList_2)
                        result = sub_42c124(ExceptionList_1, &var_74, var_8, var_88_25)
                        edi_23 += 1
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                var_28_4 += 1
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
    else
        sub_42bbb0(var_8[5], arg7)
        result = var_3d_1 - 3
        
        if (var_3d_1 u< 3)
            sub_406ce8(var_4c, var_50, var_54, &var_64, var_48)
            var_54 = var_64
            int32_t* edi_12 = &var_50
            void var_60
            void* esi_11 = &var_60
            *edi_12 = *esi_11
            void* edi_13 = &edi_12[1]
            void* esi_12 = esi_11 + 4
            *edi_13 = *esi_12
            *(edi_13 + 4) = *(esi_12 + 4)
            int32_t* var_88_12 = &var_20
            uint32_t eax_54 = sub_430dc4(arg5)
            return sub_42be60(arg5, &var_54, var_8, eax_54, var_88_12)
        
        if (var_3d_1 == 3)
            result = sub_406c1c(eax_4, 0, 0, &var_54, ExceptionList_2)
            
            if (edi_4 s>= 0)
                int32_t i_4 = edi_4 + 1
                int32_t var_28_1 = 0
                int32_t i_3
                
                do
                    if (var_2c_1 s>= 0)
                        int32_t edi_17 = 0
                        int32_t j_3
                        
                        do
                            int32_t* var_88_14 = &var_20
                            uint32_t eax_58 = sub_430dc4(arg5)
                            ExceptionList = ExceptionList_2
                            sub_406ce8(eax_4, arg2[1] + var_28_1 * ExceptionList_2, 
                                *arg2 + edi_17 * eax_4, &var_64, ExceptionList)
                            result, j_3 = sub_42be60(arg5, &var_64, var_8, eax_58, var_88_14)
                            edi_17 += 1
                        while (j_3 != 1)
                    
                    var_28_1 += 1
                    i_3 = i_4
                    i_4 -= 1
                while (i_3 != 1)

return result
