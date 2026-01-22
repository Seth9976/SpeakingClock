// 函数: sub_49681c
// 地址: 0x49681c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t lprect_1 = *arg1
void var_10
void* edi = &var_10
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* var_18 = arg2
int32_t* result

if (*(arg3 + 0x24) != 0)
    char eax_2 = *(arg3 + 0x30)
    int32_t __saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
    RECT* ExceptionList_1
    
    if (eax_2 u< 1)
        char eax_4 = *(arg3 + 0x19)
        
        if (eax_4 != 6)
            int32_t edx_2 = *(arg3 + 0x2c)
            int32_t edx_4 = *(arg3 + 0x34)
            ExceptionList_1 = zx.d(*(arg3 + 0x1b))
            void* edx_8 = sub_48d1f4(eax_4, &lprect_1, var_18, ExceptionList_1, edx_4, edx_2)
            int32_t* var_58_3 = &__saved_ebp
            sub_496798(zx.d(*(arg3 + 0x21)), edx_8)
            int32_t eax_20 = *(arg3 + 0x2c)
            int32_t eax_22 = *(arg3 + 0x34)
            ExceptionList_1 = zx.d(*(arg3 + 0x1a))
            arg2 = sub_48d1f4(*(arg3 + 0x18), &lprect_1, var_18, ExceptionList_1, eax_22, eax_20)
        else
            int32_t var_58_1 = *(arg3 + 0x34)
            int32_t eax_8 = *(arg3 + 0x1c)
            ExceptionList_1 = zx.d(*(arg3 + 0x1b))
            char eax_12 = *(arg3 + 0x1a)
            ExceptionList = nullptr
            arg2 = sub_48d638(*(arg3 + 0x2c), &lprect_1, var_18, ExceptionList.b, arg5, eax_12, 
                ExceptionList_1, eax_8)
    else if (eax_2 == 1)
        arg2 = sub_48d790(zx.d(*(arg3 + 0x38)), &lprect_1, 0)
    else if (eax_2 == 2)
        enum DRAWEDGE_FLAGS edge = 0
        int16_t var_1e_1 = 0
        
        if (0 != *(arg3 + 0x22))
            switch (zx.d(*(arg3 + 0x23)))
                case 0
                    edge = BDR_RAISEDINNER
                case 1
                    edge = BDR_RAISEDOUTER
                case 2
                    edge = BDR_SUNKENINNER
                case 3
                    edge = BDR_SUNKENOUTER
                case 4
                    edge = EDGE_BUMP
                case 5
                    edge = EDGE_ETCHED
                case 6
                    edge = BDR_RAISED
                case 7
                    edge = BDR_SUNKEN
            
            int32_t lprect = lprect_1
            void var_34
            void* edi_9 = &var_34
            void* esi_9 = &var_10
            *edi_9 = *esi_9
            void* edi_10 = edi_9 + 4
            void* esi_10 = esi_9 + 4
            *edi_10 = *esi_10
            *(edi_10 + 4) = *(esi_10 + 4)
            int32_t lprect_2 = lprect_1
            void var_44
            void** edi_13 = &var_44
            void* esi_13 = &var_10
            *edi_13 = *esi_13
            void* edi_14 = &edi_13[1]
            void* esi_14 = esi_13 + 4
            *edi_14 = *esi_14
            *(edi_14 + 4) = *(esi_14 + 4)
            
            if ((*(arg3 + 0x22) & 1) != 0)
                void* eax_32
                eax_32.w = 8
                void var_3c
                void var_2c
                sub_496800(eax_32.w, &var_2c, &var_3c, 2, &__saved_ebp)
            
            if ((*(arg3 + 0x22) & 8) != 0)
                void* eax_33
                eax_33.w = 2
                sub_496800(eax_33.w, &var_34, &var_44, 0xfffffffe, &__saved_ebp)
            
            if ((*(arg3 + 0x22) & 4) != 0)
                void* eax_34
                eax_34.w = 4
                void var_40
                void var_30
                sub_496800(eax_34.w, &var_30, &var_40, 2, &__saved_ebp)
            
            if ((*(arg3 + 0x22) & 2) != 0)
                void* eax_35
                eax_35.w = 1
                sub_496800(eax_35.w, &lprect, &lprect_2, 0xfffffffe, &__saved_ebp)
            
            ExceptionList_1 = &lprect_1
            arg2 = DrawEdge(sub_42c73c(var_18), ExceptionList_1, edge, zx.d(var_1e_1))
            
            if (arg5 == 0)
                int32_t dy = 0xfffffffe
                int32_t dx = 0xfffffffe
                ExceptionList_1 = &lprect
                InflateRect(ExceptionList_1, dx, dy)
                HRGN hrgn = CreateRectRgnIndirect(&lprect_1)
                int32_t* var_58_12 = &__saved_ebp
                int32_t (* var_5c_9)(void* arg1, void* arg2) = j_sub_40443c
                TEB* fsbase
                ExceptionList_1 = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList_1
                HRGN hrgn_1 = CreateRectRgnIndirect(&lprect)
                int32_t* var_64_4 = &__saved_ebp
                int32_t (* var_68_2)(void* arg1, void* arg2) = j_sub_40443c
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                SelectClipRgn(sub_42c73c(var_18), hrgn)
                ExtSelectClipRgn(sub_42c73c(var_18), hrgn_1, RGN_DIFF)
                HBRUSH hbr
                void* ebp
                hbr, ebp = sub_42bc04(var_18[5])
                FillRect(sub_42c73c(*(ebp - 0x14)), ebp - 0x10, hbr)
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t* (* var_64_5)(int32_t* arg1 @ ebp, int32_t* arg2, int32_t arg3, 
                    int32_t arg4, int32_t arg5) = sub_496afe
                return DeleteObject(*(ebp - 0x24))
            
            lprect_1 = lprect_2
            void** edi_17 = &var_10
            void** esi_17 = &var_44
            *edi_17 = *esi_17
            void* edi_18 = &edi_17[1]
            void* esi_18 = &esi_17[1]
            *edi_18 = *esi_18
            *(edi_18 + 4) = *(esi_18 + 4)
    else if (eax_2 == 3)
        arg1.b = 7
        arg2 = sub_48d790(arg1, &lprect_1, 0)
    int32_t* var_58_14 = &__saved_ebp
    sub_496798(zx.d(*(arg3 + 0x20)), arg2)
    result = arg4
    *result = lprect_1
    void* edi_22 = &result[1]
    void* esi_21 = &var_10
    *edi_22 = *esi_21
    void* edi_23 = edi_22 + 4
    void* esi_22 = esi_21 + 4
    *edi_23 = *esi_22
    *(edi_23 + 4) = *(esi_22 + 4)
else
    result = arg4
    *result = lprect_1
    void* edi_5 = &result[1]
    void* esi_5 = &var_10
    *edi_5 = *esi_5
    void* edi_6 = edi_5 + 4
    void* esi_6 = esi_5 + 4
    *edi_6 = *esi_6
    *(edi_6 + 4) = *(esi_6 + 4)

return result
