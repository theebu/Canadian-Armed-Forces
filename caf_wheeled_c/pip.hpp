// Actual stuff
		
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition		= "MFD1_pos";
					pointDirection		= "MFD1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 2;
					fov 				= 0.7;
				};
			};
			class PIP3
			{
				renderTarget = "rendertarget1"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
				class MirrorView1
				{
					pointPosition		= "PIP3_pos"; 	/// memory point of PiP origin
					pointDirection		= "PIP3_dir"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 4;			/// zero means standard vision
					fov 				= 0.7;			/// what is the angle of the PiP field of view
				}; 			
			};
			class PIP4
			{
				renderTarget = "rendertarget1"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
				class MirrorView1
				{
					pointPosition		= "PIP4_pos"; 	/// memory point of PiP origin
					pointDirection		= "PIP4_dir"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 4;			/// zero means standard vision
					fov 				= 0.7;			/// what is the angle of the PiP field of view
				}; 			
			};
		};