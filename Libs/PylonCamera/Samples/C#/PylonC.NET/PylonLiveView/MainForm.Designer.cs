namespace PylonLiveView
{
    partial class MainForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.splitContainerImageView = new System.Windows.Forms.SplitContainer();
            this.splitContainerConfiguration = new System.Windows.Forms.SplitContainer();
            this.deviceListView = new System.Windows.Forms.ListView();
            this.comboBoxTestImage = new PylonC.NETSupportLibrary.EnumerationComboBoxUserControl();
            this.comboBoxPixelFormat = new PylonC.NETSupportLibrary.EnumerationComboBoxUserControl();
            this.sliderHeight = new PylonC.NETSupportLibrary.SliderUserControl();
            this.sliderWidth = new PylonC.NETSupportLibrary.SliderUserControl();
            this.sliderExposureTime = new PylonC.NETSupportLibrary.SliderUserControl();
            this.sliderGain = new PylonC.NETSupportLibrary.SliderUserControl();
            this.toolStrip = new System.Windows.Forms.ToolStrip();
            this.toolStripButtonOneShot = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonContinuousShot = new System.Windows.Forms.ToolStripButton();
            this.toolStripButtonStop = new System.Windows.Forms.ToolStripButton();
            this.pictureBox = new System.Windows.Forms.PictureBox();
            this.updateDeviceListTimer = new System.Windows.Forms.Timer(this.components);
            this.imageListForDeviceList = new System.Windows.Forms.ImageList(this.components);
            this.splitContainerImageView.Panel1.SuspendLayout();
            this.splitContainerImageView.Panel2.SuspendLayout();
            this.splitContainerImageView.SuspendLayout();
            this.splitContainerConfiguration.Panel1.SuspendLayout();
            this.splitContainerConfiguration.Panel2.SuspendLayout();
            this.splitContainerConfiguration.SuspendLayout();
            this.toolStrip.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).BeginInit();
            this.SuspendLayout();
            //
            // splitContainerImageView
            //
            this.splitContainerImageView.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.splitContainerImageView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainerImageView.FixedPanel = System.Windows.Forms.FixedPanel.Panel1;
            this.splitContainerImageView.Location = new System.Drawing.Point(0, 0);
            this.splitContainerImageView.Name = "splitContainerImageView";
            //
            // splitContainerImageView.Panel1
            //
            this.splitContainerImageView.Panel1.Controls.Add(this.splitContainerConfiguration);
            this.splitContainerImageView.Panel1.Controls.Add(this.toolStrip);
            //
            // splitContainerImageView.Panel2
            //
            this.splitContainerImageView.Panel2.AutoScroll = true;
            this.splitContainerImageView.Panel2.Controls.Add(this.pictureBox);
            this.splitContainerImageView.Size = new System.Drawing.Size(792, 566);
            this.splitContainerImageView.SplitterDistance = 226;
            this.splitContainerImageView.TabIndex = 0;
            this.splitContainerImageView.TabStop = false;
            //
            // splitContainerConfiguration
            //
            this.splitContainerConfiguration.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.splitContainerConfiguration.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainerConfiguration.Location = new System.Drawing.Point(0, 39);
            this.splitContainerConfiguration.Name = "splitContainerConfiguration";
            this.splitContainerConfiguration.Orientation = System.Windows.Forms.Orientation.Horizontal;
            //
            // splitContainerConfiguration.Panel1
            //
            this.splitContainerConfiguration.Panel1.Controls.Add(this.deviceListView);
            //
            // splitContainerConfiguration.Panel2
            //
            this.splitContainerConfiguration.Panel2.Controls.Add(this.comboBoxTestImage);
            this.splitContainerConfiguration.Panel2.Controls.Add(this.comboBoxPixelFormat);
            this.splitContainerConfiguration.Panel2.Controls.Add(this.sliderHeight);
            this.splitContainerConfiguration.Panel2.Controls.Add(this.sliderWidth);
            this.splitContainerConfiguration.Panel2.Controls.Add(this.sliderExposureTime);
            this.splitContainerConfiguration.Panel2.Controls.Add(this.sliderGain);
            this.splitContainerConfiguration.Size = new System.Drawing.Size(226, 527);
            this.splitContainerConfiguration.SplitterDistance = 165;
            this.splitContainerConfiguration.TabIndex = 1;
            this.splitContainerConfiguration.TabStop = false;
            //
            // deviceListView
            //
            this.deviceListView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.deviceListView.Location = new System.Drawing.Point(0, 0);
            this.deviceListView.MultiSelect = false;
            this.deviceListView.Name = "deviceListView";
            this.deviceListView.ShowItemToolTips = true;
            this.deviceListView.Size = new System.Drawing.Size(222, 161);
            this.deviceListView.TabIndex = 0;
            this.deviceListView.UseCompatibleStateImageBehavior = false;
            this.deviceListView.View = System.Windows.Forms.View.Tile;
            this.deviceListView.SelectedIndexChanged += new System.EventHandler(this.deviceListView_SelectedIndexChanged);
            this.deviceListView.KeyDown += new System.Windows.Forms.KeyEventHandler(this.deviceListView_KeyDown);
            this.deviceListView.LargeImageList = imageListForDeviceList;
            //
            // comboBoxTestImage
            //
            this.comboBoxTestImage.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.comboBoxTestImage.Location = new System.Drawing.Point(12, 7);
            this.comboBoxTestImage.MinimumSize = new System.Drawing.Size(150, 39);
            this.comboBoxTestImage.Name = "comboBoxTestImage";
            this.comboBoxTestImage.NodeName = "TestImageSelector";
            this.comboBoxTestImage.Size = new System.Drawing.Size(199, 46);
            this.comboBoxTestImage.TabIndex = 6;
            //
            // comboBoxPixelFormat
            //
            this.comboBoxPixelFormat.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.comboBoxPixelFormat.Location = new System.Drawing.Point(12, 60);
            this.comboBoxPixelFormat.MinimumSize = new System.Drawing.Size(150, 39);
            this.comboBoxPixelFormat.Name = "comboBoxPixelFormat";
            this.comboBoxPixelFormat.NodeName = "PixelFormat";
            this.comboBoxPixelFormat.Size = new System.Drawing.Size(199, 46);
            this.comboBoxPixelFormat.TabIndex = 5;
            //
            // sliderHeight
            //
            this.sliderHeight.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.sliderHeight.Location = new System.Drawing.Point(0, 279);
            this.sliderHeight.MaximumSize = new System.Drawing.Size(875, 50);
            this.sliderHeight.MinimumSize = new System.Drawing.Size(225, 50);
            this.sliderHeight.Name = "sliderHeight";
            this.sliderHeight.NodeName = "Height";
            this.sliderHeight.Size = new System.Drawing.Size(230, 50);
            this.sliderHeight.TabIndex = 4;
            //
            // sliderWidth
            //
            this.sliderWidth.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.sliderWidth.Location = new System.Drawing.Point(0, 223);
            this.sliderWidth.MaximumSize = new System.Drawing.Size(875, 50);
            this.sliderWidth.MinimumSize = new System.Drawing.Size(225, 50);
            this.sliderWidth.Name = "sliderWidth";
            this.sliderWidth.NodeName = "Width";
            this.sliderWidth.Size = new System.Drawing.Size(230, 50);
            this.sliderWidth.TabIndex = 3;
            //
            // sliderExposureTime
            //
            this.sliderExposureTime.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.sliderExposureTime.Location = new System.Drawing.Point(0, 167);
            this.sliderExposureTime.MaximumSize = new System.Drawing.Size(875, 50);
            this.sliderExposureTime.MinimumSize = new System.Drawing.Size(225, 50);
            this.sliderExposureTime.Name = "sliderExposureTime";
            this.sliderExposureTime.NodeName = "ExposureTimeRaw";
            this.sliderExposureTime.Size = new System.Drawing.Size(230, 50);
            this.sliderExposureTime.TabIndex = 2;
            //
            // sliderGain
            //
            this.sliderGain.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.sliderGain.Location = new System.Drawing.Point(0, 111);
            this.sliderGain.MaximumSize = new System.Drawing.Size(875, 50);
            this.sliderGain.MinimumSize = new System.Drawing.Size(225, 50);
            this.sliderGain.Name = "sliderGain";
            this.sliderGain.NodeName = "GainRaw";
            this.sliderGain.Size = new System.Drawing.Size(230, 50);
            this.sliderGain.TabIndex = 1;
            //
            // toolStrip
            //
            this.toolStrip.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.toolStrip.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripButtonOneShot,
            this.toolStripButtonContinuousShot,
            this.toolStripButtonStop});
            this.toolStrip.Location = new System.Drawing.Point(0, 0);
            this.toolStrip.Name = "toolStrip";
            this.toolStrip.Size = new System.Drawing.Size(226, 39);
            this.toolStrip.TabIndex = 0;
            this.toolStrip.Text = "toolStrip";
            //
            // toolStripButtonOneShot
            //
            this.toolStripButtonOneShot.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonOneShot.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButtonOneShot.Image")));
            this.toolStripButtonOneShot.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButtonOneShot.Name = "toolStripButtonOneShot";
            this.toolStripButtonOneShot.Size = new System.Drawing.Size(36, 36);
            this.toolStripButtonOneShot.Text = "One Shot";
            this.toolStripButtonOneShot.ToolTipText = "One Shot";
            this.toolStripButtonOneShot.Click += new System.EventHandler(this.toolStripButtonOneShot_Click);
            //
            // toolStripButtonContinuousShot
            //
            this.toolStripButtonContinuousShot.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonContinuousShot.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButtonContinuousShot.Image")));
            this.toolStripButtonContinuousShot.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButtonContinuousShot.Name = "toolStripButtonContinuousShot";
            this.toolStripButtonContinuousShot.Size = new System.Drawing.Size(36, 36);
            this.toolStripButtonContinuousShot.Text = "Continuous Shot";
            this.toolStripButtonContinuousShot.ToolTipText = "Continuous Shot";
            this.toolStripButtonContinuousShot.Click += new System.EventHandler(this.toolStripButtonContinuousShot_Click);
            //
            // toolStripButtonStop
            //
            this.toolStripButtonStop.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButtonStop.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButtonStop.Image")));
            this.toolStripButtonStop.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButtonStop.Name = "toolStripButtonStop";
            this.toolStripButtonStop.Size = new System.Drawing.Size(36, 36);
            this.toolStripButtonStop.Text = "Stop Grab";
            this.toolStripButtonStop.ToolTipText = "Stop Grab";
            this.toolStripButtonStop.Click += new System.EventHandler(this.toolStripButtonStop_Click);
            //
            // pictureBox
            //
            this.pictureBox.Location = new System.Drawing.Point(0, 0);
            this.pictureBox.Name = "pictureBox";
            this.pictureBox.Size = new System.Drawing.Size(480, 480);
            this.pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize;
            this.pictureBox.TabIndex = 0;
            this.pictureBox.TabStop = false;
            //
            // updateDeviceListTimer
            //
            this.updateDeviceListTimer.Enabled = true;
            this.updateDeviceListTimer.Interval = 5000;
            this.updateDeviceListTimer.Tick += new System.EventHandler(this.updateDeviceListTimer_Tick);
            //
            // imageListForDeviceList
            //
            this.imageListForDeviceList.ColorDepth = System.Windows.Forms.ColorDepth.Depth8Bit;
            this.imageListForDeviceList.ImageSize = new System.Drawing.Size(32, 32);
            this.imageListForDeviceList.TransparentColor = System.Drawing.Color.Transparent;
            //
            // MainForm
            //
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(792, 566);
            this.Controls.Add(this.splitContainerImageView);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "MainForm";
            this.Text = "Pylon Live View";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.MainForm_FormClosing);
            this.splitContainerImageView.Panel1.ResumeLayout(false);
            this.splitContainerImageView.Panel1.PerformLayout();
            this.splitContainerImageView.Panel2.ResumeLayout(false);
            this.splitContainerImageView.Panel2.PerformLayout();
            this.splitContainerImageView.ResumeLayout(false);
            this.splitContainerConfiguration.Panel1.ResumeLayout(false);
            this.splitContainerConfiguration.Panel2.ResumeLayout(false);
            this.splitContainerConfiguration.ResumeLayout(false);
            this.toolStrip.ResumeLayout(false);
            this.toolStrip.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.SplitContainer splitContainerImageView;
        private System.Windows.Forms.PictureBox pictureBox;
        private System.Windows.Forms.ToolStrip toolStrip;
        private System.Windows.Forms.ToolStripButton toolStripButtonOneShot;
        private System.Windows.Forms.ToolStripButton toolStripButtonContinuousShot;
        private System.Windows.Forms.ToolStripButton toolStripButtonStop;
        private System.Windows.Forms.SplitContainer splitContainerConfiguration;
        private System.Windows.Forms.ListView deviceListView;
        private PylonC.NETSupportLibrary.SliderUserControl sliderGain;
        private PylonC.NETSupportLibrary.SliderUserControl sliderWidth;
        private PylonC.NETSupportLibrary.SliderUserControl sliderExposureTime;
        private PylonC.NETSupportLibrary.SliderUserControl sliderHeight;
        private PylonC.NETSupportLibrary.EnumerationComboBoxUserControl comboBoxPixelFormat;
        private PylonC.NETSupportLibrary.EnumerationComboBoxUserControl comboBoxTestImage;
        private System.Windows.Forms.Timer updateDeviceListTimer;
        private System.Windows.Forms.ImageList imageListForDeviceList;

    }
}

