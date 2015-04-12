namespace MainForm
{
    partial class Form1
    {
        /// <summary>
        /// 必要なデザイナー変数です。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 使用中のリソースをすべてクリーンアップします。
        /// </summary>
        /// <param name="disposing">マネージ リソースが破棄される場合 true、破棄されない場合は false です。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows フォーム デザイナーで生成されたコード

        /// <summary>
        /// デザイナー サポートに必要なメソッドです。このメソッドの内容を
        /// コード エディターで変更しないでください。
        /// </summary>
        private void InitializeComponent()
        {
            this.refButton1 = new System.Windows.Forms.Button();
            this.img_fname = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.viewButton = new System.Windows.Forms.Button();
            this.checkBox1 = new System.Windows.Forms.CheckBox();
            this.checkBox2 = new System.Windows.Forms.CheckBox();
            this.SuspendLayout();
            // 
            // refButton1
            // 
            this.refButton1.Location = new System.Drawing.Point(380, 27);
            this.refButton1.Name = "refButton1";
            this.refButton1.Size = new System.Drawing.Size(75, 23);
            this.refButton1.TabIndex = 0;
            this.refButton1.Text = "参照";
            this.refButton1.UseVisualStyleBackColor = true;
            this.refButton1.Click += new System.EventHandler(this.refButton1_Click);
            // 
            // img_fname
            // 
            this.img_fname.AllowDrop = true;
            this.img_fname.Location = new System.Drawing.Point(12, 29);
            this.img_fname.Name = "img_fname";
            this.img_fname.Size = new System.Drawing.Size(362, 19);
            this.img_fname.TabIndex = 1;
            this.img_fname.DragDrop += new System.Windows.Forms.DragEventHandler(this.img_fname_DragDrop);
            this.img_fname.DragEnter += new System.Windows.Forms.DragEventHandler(this.img_fname_DragEnter);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(75, 12);
            this.label1.TabIndex = 2;
            this.label1.Text = "画像ファイル名";
            // 
            // viewButton
            // 
            this.viewButton.Location = new System.Drawing.Point(204, 271);
            this.viewButton.Name = "viewButton";
            this.viewButton.Size = new System.Drawing.Size(75, 23);
            this.viewButton.TabIndex = 3;
            this.viewButton.Text = "ビュー";
            this.viewButton.UseVisualStyleBackColor = true;
            this.viewButton.Click += new System.EventHandler(this.button2_Click);
            // 
            // checkBox1
            // 
            this.checkBox1.AutoSize = true;
            this.checkBox1.Location = new System.Drawing.Point(27, 99);
            this.checkBox1.Name = "checkBox1";
            this.checkBox1.Size = new System.Drawing.Size(75, 16);
            this.checkBox1.TabIndex = 4;
            this.checkBox1.Text = "カラー画像";
            this.checkBox1.UseVisualStyleBackColor = true;
            // 
            // checkBox2
            // 
            this.checkBox2.AutoSize = true;
            this.checkBox2.Location = new System.Drawing.Point(27, 122);
            this.checkBox2.Name = "checkBox2";
            this.checkBox2.Size = new System.Drawing.Size(84, 16);
            this.checkBox2.TabIndex = 5;
            this.checkBox2.Text = "バイナリ画像";
            this.checkBox2.UseVisualStyleBackColor = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(467, 306);
            this.Controls.Add(this.checkBox2);
            this.Controls.Add(this.checkBox1);
            this.Controls.Add(this.viewButton);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.img_fname);
            this.Controls.Add(this.refButton1);
            this.Name = "Form1";
            this.Text = "OpenCV Form Application";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button refButton1;
        private System.Windows.Forms.TextBox img_fname;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button viewButton;
        private System.Windows.Forms.CheckBox checkBox1;
        private System.Windows.Forms.CheckBox checkBox2;
    }
}

