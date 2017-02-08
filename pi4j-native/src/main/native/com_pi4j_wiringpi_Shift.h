/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Shift.h
 * 
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  http://www.pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2017 Pi4J
 * %%
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 * 
 * You should have received a copy of the GNU General Lesser Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/lgpl-3.0.html>.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Shift */

#ifndef _Included_com_pi4j_wiringpi_Shift
#define _Included_com_pi4j_wiringpi_Shift
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pi4j_wiringpi_Shift_LSBFIRST
#define com_pi4j_wiringpi_Shift_LSBFIRST 0L
#undef com_pi4j_wiringpi_Shift_MSBFIRST
#define com_pi4j_wiringpi_Shift_MSBFIRST 1L
/*
 * Class:     com_pi4j_wiringpi_Shift
 * Method:    shiftIn
 * Signature: (BBB)B
 */
JNIEXPORT jbyte JNICALL Java_com_pi4j_wiringpi_Shift_shiftIn
  (JNIEnv *, jclass, jbyte, jbyte, jbyte);

/*
 * Class:     com_pi4j_wiringpi_Shift
 * Method:    shiftOut
 * Signature: (BBBB)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Shift_shiftOut
  (JNIEnv *, jclass, jbyte, jbyte, jbyte, jbyte);

#ifdef __cplusplus
}
#endif
#endif
