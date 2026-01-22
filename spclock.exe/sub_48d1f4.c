// 函数: sub_48d1f4
// 地址: 0x48d1f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 0

if (arg4 != 0 && arg1 != 0 && arg1 != 6)
    int32_t var_10_1
    int32_t var_c_1
    
    if (arg1 == 1 || arg1 == 3)
        var_c_1 = arg6
        var_10_1 = arg5
    else if (arg1 == 5)
        var_c_1 = 0
        var_10_1 = 0
    else
        var_c_1 = arg5
        var_10_1 = arg6
    
    if (arg1 - 1 u< 2)
    label_48d26f:
        arg2[3] -= 1
        int32_t var_54
        int32_t var_50
        int32_t var_4c
        int32_t var_48
        int32_t var_44
        int32_t var_40
        
        if (arg4 != 1)
            int32_t var_24
            sub_406c1c(arg2[2] - arg4, arg2[1] + arg4, *arg2 + arg4, &var_24, arg2[3] - arg4)
            int32_t edx_11
            edx_11.b = 5
            sub_42b99c(arg3[4], edx_11.b)
            sub_42bcec(arg3[5], 0)
            sub_42bbb0(arg3[5], var_c_1)
            sub_406c38(*arg2, arg2[3] + 1, &var_44)
            POINT var_84
            var_84.x = var_44
            var_84.y = var_40
            int32_t var_18
            sub_406c38(var_24, var_18, &var_4c)
            int32_t var_7c_1 = var_4c
            int32_t var_78_1 = var_48
            int32_t var_1c
            sub_406c38(var_1c, var_18, &var_54)
            int32_t var_74_1 = var_54
            int32_t var_70_1 = var_50
            int32_t var_8c
            int32_t var_20
            sub_406c38(var_1c, var_20, &var_8c)
            int32_t var_6c_1 = var_8c
            int32_t var_88
            int32_t var_68_1 = var_88
            int32_t var_94
            sub_406c38(arg2[2], arg2[1], &var_94)
            int32_t var_64_1 = var_94
            int32_t var_90
            int32_t var_60_1 = var_90
            int32_t var_9c
            sub_406c38(arg2[2], arg2[3] + 1, &var_9c)
            int32_t var_5c_1 = var_9c
            int32_t var_98
            int32_t var_58_1 = var_98
            sub_42c35c(arg3, &var_84, 5)
            sub_42bbb0(arg3[5], var_10_1)
            int32_t var_1c_1 = var_1c - 1
            sub_406c38(*arg2, arg2[3], &var_44)
            var_84.x = var_44
            var_84.y = var_40
            int32_t edi_2 = var_24
            sub_406c38(edi_2, var_18, &var_4c)
            int32_t var_7c_2 = var_4c
            int32_t var_78_2 = var_48
            sub_406c38(edi_2, var_20, &var_54)
            int32_t var_74_2 = var_54
            int32_t var_70_2 = var_50
            sub_406c38(var_1c_1, var_20, &var_8c)
            int32_t var_6c_2 = var_8c
            int32_t var_68_2 = var_88
            sub_406c38(arg2[2] - 1, arg2[1], &var_94)
            int32_t var_64_2 = var_94
            int32_t var_60_2 = var_90
            sub_406c38(*arg2, arg2[1], &var_9c)
            int32_t var_5c_2 = var_9c
            int32_t var_58_2 = var_98
            sub_42c35c(arg3, &var_84, 5)
            int32_t eax_78 = neg.d(arg4)
            InflateRect(arg2, eax_78, eax_78)
            arg2[2] -= 1
        else
            arg2[2] -= 1
            sub_42b9d4(arg3[4], 1)
            sub_42b99c(arg3[4], 0)
            sub_42b8b8(arg3[4], var_10_1)
            sub_406c38(*arg2, arg2[3], &var_44)
            POINT var_3c
            var_3c.x = var_44
            var_3c.y = var_40
            sub_406c38(*arg2, arg2[1], &var_4c)
            int32_t var_34_1 = var_4c
            int32_t var_30_1 = var_48
            sub_406c38(arg2[2], arg2[1], &var_54)
            int32_t var_2c_1 = var_54
            int32_t var_28_1 = var_50
            sub_42c398(arg3, &var_3c, 2)
            sub_42b8b8(arg3[4], var_c_1)
            sub_406c38(arg2[2], arg2[1], &var_44)
            var_3c.x = var_44
            var_3c.y = var_40
            sub_406c38(arg2[2], arg2[3], &var_4c)
            int32_t var_34_2 = var_4c
            int32_t var_30_2 = var_48
            sub_406c38(*arg2, arg2[3], &var_54)
            int32_t var_2c_2 = var_54
            int32_t var_28_2 = var_50
            sub_42c398(arg3, &var_3c, 2)
            InflateRect(arg2, 0xffffffff, 0xffffffff)
        arg2[2] += 1
        arg2[3] += 1
        var_5 = 1
    else if (arg1 - 3 u< 2)
        int32_t var_ac
        
        if (arg4 - 1 s>= 0)
            int32_t i_1 = arg4
            int32_t edi_3 = 0
            int32_t i
            
            do
                sub_42bbb0(arg3[5], var_c_1)
                sub_406c1c(arg2[2], arg2[1] + edi_3 + 1, *arg2 + edi_3 + 1, &var_ac, arg2[3])
                sub_42c294(arg3, &var_ac)
                sub_42bbb0(arg3[5], var_10_1)
                sub_406c1c(arg2[2] - edi_3 - 1, arg2[1], *arg2, &var_ac, arg2[3] - edi_3 - 1)
                sub_42c294(arg3, &var_ac)
                edi_3 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_406c1c(arg2[2] - arg4 - 1, arg2[1] + arg4 + 1, *arg2 + arg4 + 1, &var_ac, 
            arg2[3] - arg4 - 1)
        *arg2 = var_ac
        void* edi_5 = &arg2[1]
        void var_a8
        void* esi_1 = &var_a8
        *edi_5 = *esi_1
        void* edi_6 = edi_5 + 4
        void* esi_2 = esi_1 + 4
        *edi_6 = *esi_2
        *(edi_6 + 4) = *(esi_2 + 4)
        var_5 = 1
    else if (arg1 == 5)
        goto label_48d26f

return zx.d(var_5)
